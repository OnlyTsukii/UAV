#include <stdio.h>
#include <sys/types.h>
#include "guidescusb2.h"
#include "guidemt.h"
#include <unistd.h>
#include <malloc.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <stdbool.h>
#include <fcntl.h>
#include "sys/time.h"
#include "time.h"
#include <stdlib.h>
#include <SDL/SDL.h>
#include <jpeglib.h>
#include "libbmp.h"
#include <stdint.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <libusb.h>
#include <arpa/inet.h>

#define PORT        8889
#define BUFFER_SIZE 64
#define CMD_SHOOT   "1"

#define YOLO_IP   "127.0.0.1"
#define YOLO_PORT 8890

#define WIDTH   640
#define HEIGHT  512

#define DEV_TYPE    0           // COIN612R
#define LENS_TYPE   2           // 13mm
#define CONV_NUM WIDTH *HEIGHT  // Number of temperature conversions

#define VIDEO_FRAME_RATE 30
#define INPUT_FILE_NAME "/home/ccl/UAV/InfraredCamera/images/output%d.bmp"
#define OUTPUT_FILE_NAME "/home/ccl//UAV/InfraredCamera/output.mp4"
#define VIDEO_FORMAT "yuv420p"
#define CONSTANT_RATE_FACTOR 10

#define IMAGE_FOLDER "/home/ccl//UAV/InfraredCamera/images"
#define TEMP_FOLDER "/home/ccl//UAV//InfraredCamera/temp"

#define IMAGE_PREFIX "/home/ccl//UAV/InfraredCamera/images/output"
#define IMAGE_SUBFIX ".bmp"

#define TEMPMAT_PREFIX "/home/ccl//UAV/InfraredCamera/temp/temp_mat"
#define TEMPMAT_SUBFIX ".txt"

int sockfd;
struct sockaddr_in server_addr, client_addr;
socklen_t addr_len = 0;
bool shutter = false;

int client_socketfd;
struct sockaddr_in yolo_addr;

SDL_Overlay *Overlay;
SDL_Surface *Surface;
SDL_Rect Rect;
SDL_Event Event;
unsigned char *yuv422Data = NULL;
unsigned char *paramline = NULL;
guide_measure_external_param_t *m_param = NULL;
float *pTemper = NULL;

libusb_device_handle *gd_dev_handle = NULL;
libusb_context *gd_ctx = NULL;

int FPS = 0;
int count = 0;
double startTime;
boolean flag = true;
int temp_idx = 0;
int bmp_idx = 0;

void socket_serve();
void socket_client_init();
int serailCallBack(int id, guide_usb_serial_data_t *pSerialData);
int connectStatusCallBack(int id, guide_usb_device_status_e deviceStatus);
int frameCallBack(int id, guide_usb_frame_data_t *pVideoData);
// void img2video(char *input_files, int framerate, char *output_file, char *video_format, int crf);
int clear_folder(char *dirname);


void socket_client_init(){
    if ((client_socketfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
        printf("Create socket failed");
        return;
    }

    memset(&yolo_addr, 0, sizeof(yolo_addr));
    yolo_addr.sin_family = AF_INET;
    yolo_addr.sin_port = htons(YOLO_PORT);
    if (inet_pton(AF_INET, YOLO_IP, &yolo_addr.sin_addr) <= 0) {
        printf("Invalid IP address");
        return;
    }
}

void socket_serve()
{
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
    {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    addr_len = sizeof(client_addr);

    memset(&server_addr, 0, sizeof(server_addr));

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    if (bind(sockfd, (const struct sockaddr *)&server_addr, sizeof(server_addr)) == -1)
    {
        printf("bind failed");
    }
    char buffer[BUFFER_SIZE];

    // int cnt = 0;
    while (1)
    {
        int len = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, MSG_WAITALL, (struct sockaddr *)&client_addr, &addr_len);
        buffer[len] = '\0';
        printf("Received message from %s:%d: %s\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port), buffer);

        // FILE *file = fopen("/home/xs/UAV/InfraredCamera/test", "a");
        // fprintf(file, "%d\n", cnt++);
        // fclose(file);

        if (strcmp(buffer, CMD_SHOOT) == 0)
        {
            shutter = true;
        }

        // int response = 0;
        // sendto(sockfd, &response, 1, MSG_CONFIRM, (const struct sockaddr *)&client_addr, addr_len);
    }
}

double tick(void)
{
    struct timeval t;
    gettimeofday(&t, 0);
    return t.tv_sec + 1E-6 * t.tv_usec;
}

int main(void)
{   

    // socket_serve();

    // Setting a Log Level
    guide_usb_setloglevel(LOG_LEVEL_INFO);

    // USB device precheck
    while (1)
    {
        int ret = libusb_init(&gd_ctx);
        if (ret < 0)
        {
            printf("libusb_init fail:%d\n", ret);
            continue;
        }
        else
        {
            printf("libusb_init ok\n");
            break;
        }
    }

    // // int cnt = 0;
    while (1)
    {
        // FILE *file = fopen("/home/ccl/InfraredCamera/test", "a");
        // fprintf(file, "%d\n", cnt++);
        // fclose(file);

        gd_dev_handle = libusb_open_device_with_vid_pid(NULL, 0x04b4, 0xf7f7);
        if (gd_dev_handle == NULL)
        {
            printf("libusb_open fail\n");
            usleep(1000000);
            continue; // fail to open usb
        }
        else
        {
            printf("libusb_open ok\n");
            libusb_close(gd_dev_handle);
            break;
        }
    }

    socket_client_init();

    // Clear old images first
    int ret = clear_folder(TEMP_FOLDER);
    if (ret != 0)
    {
        return 0;
    }

    ret = clear_folder(IMAGE_FOLDER);
    if (ret != 0)
    {
        return 0;
    }

    m_param = (guide_measure_external_param_t *)malloc(sizeof(guide_measure_external_param_t));
    m_param->emiss = 98;
    m_param->relHum = 60;
    m_param->reflectedTemper = 120;
    m_param->atmosphericTemper = 120;
    m_param->modifyK = 100;
    m_param->modifyB = 0;

    // Set basic device information
    guide_usb_device_info_t *deviceInfo = (guide_usb_device_info_t *)malloc(sizeof(guide_usb_device_info_t));
    deviceInfo->width = WIDTH;
    deviceInfo->height = HEIGHT;
    deviceInfo->video_mode = Y16_PARAM_YUV;

    // Quantity of equipment acquired  Device ID No.: 1,2,3,4,...,count
    ret = guide_usb_get_devcount();
    printf("devices counts:%d \n", ret);

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER))
    {
        fprintf(stderr, "Could not initialize SDL - %s\n", SDL_GetError());
        exit(1);
    }
    Surface = SDL_SetVideoMode(WIDTH, HEIGHT, 24, SDL_SWSURFACE);
    if (!Surface)
    {
        perror(" create vide omode error ! \n");
        return -1;
    }
    Overlay = SDL_CreateYUVOverlay(WIDTH, HEIGHT, SDL_UYVY_OVERLAY, Surface);
    Rect.x = 0;
    Rect.y = 0;
    Rect.w = WIDTH;
    Rect.h = HEIGHT;

    if (yuv422Data == NULL)
    {
        yuv422Data = (unsigned char *)malloc(WIDTH * HEIGHT * 2);
    }

    if (paramline == NULL)
    {
        paramline = (unsigned char *)malloc(WIDTH * 2);
    }

    // Initialize device
    ret = guide_usb_initial(1);
    if (ret < 0)
    {
        printf("Initial device fail:%d \n", ret);
        return ret;
    }
    else
    {
        // Endpoint communication is enabled on device
        ret = guide_usb_opencommandcontrol(1, (OnSerialDataReceivedCB)serailCallBack);
        printf("Initial device success:%d\n", ret);
    }

    // Device Starts the video streaming thread
    ret = guide_usb_openstream(1, deviceInfo, (OnFrameDataReceivedCB)frameCallBack, (OnDeviceConnectStatusCB)connectStatusCallBack);
    if (ret < 0)
    {
        printf("Open fail:%d\n", ret);
        return ret;
    }
    else
    {
        printf("Open return:%d\n", ret);
    }
    startTime = tick();

    // Sleep for 10 seconds
    // usleep(15000000);

    // Run forever
    socket_serve();

    close(sockfd);

    ret = guide_usb_closestream(1);
    printf("close return:%d\n", ret);

    ret = guide_usb_closecommandcontrol(1);
    printf("closecommandcontrol return:%d\n", ret);

    ret = guide_usb_exit(1);
    printf("exit return:%d\n", ret);

    if (yuv422Data != NULL)
    {
        free(yuv422Data);
        yuv422Data = NULL;
    }

    printf("guide_usb_destory_instance return:%d\n", ret);
    free(deviceInfo);

    SDL_Quit();

    // img2video(INPUT_FILE_NAME, VIDEO_FRAME_RATE, OUTPUT_FILE_NAME, VIDEO_FORMAT, CONSTANT_RATE_FACTOR);

    return ret;
}

int serailCallBack(int id, guide_usb_serial_data_t *pSerialData)
{

    switch (id)
    {
    case 1:
        printf("ID:%d---->data length:%d \n", id, pSerialData->serial_recv_data_length);
        break;
    case 2:
        // printf("ID:%d---->data length:%d \n",id,pSerialData->serial_recv_data_length);
        break;
    }
}

int connectStatusCallBack(int id, guide_usb_device_status_e deviceStatus)
{
    switch (id)
    {
    case 1:
        switch (deviceStatus)
        {
        case DEVICE_CONNECT_OK:
            printf("ID:%d VideoStream Capture start...\n", id);
            break;
        case DEVICE_DISCONNECT_OK:
            printf("ID:%d VideoStream Capture end...\n", id);
            break;
        }
        break;
    case 2:
        switch (deviceStatus)
        {
        case DEVICE_CONNECT_OK:
            printf("ID:%d VideoStream Capture start...\n", id);
            break;
        case DEVICE_DISCONNECT_OK:
            printf("ID:%d VideoStream Capture end...\n", id);
            break;
        }
        break;
    }
}

void print_binary(short value)
{
    for (int i = 15; i >= 0; i--)
    {
        printf("%d", (value >> i) & 1);
    }
    printf("\n");
}

int frameCallBack(int id, guide_usb_frame_data_t *pVideoData)
{
    switch (id)
    {
    case 1:
        FPS++;
        if ((tick() - startTime) > 1)
        {
            startTime = tick();
            printf("FPS-------------------------%d\n", FPS);
            FPS = 0;
        }

        // Shoot a picture
        if (shutter)
        {
            shutter = false;

            pTemper = (float *)malloc(sizeof(float) * pVideoData->frame_src_data_length);
            int ret = guide_measure_convertgray2temper(DEV_TYPE, LENS_TYPE, pVideoData->frame_src_data, (char *)pVideoData->paramLine,
                                                       CONV_NUM, m_param, pTemper);
            if (ret == 0)
            {
                printf("Measure temperature success: ret %d \n", ret);
            }
            else
            {
                printf("Measure temperature failed: ret %d \n", ret);
            }

            char temp_str[3];
            sprintf(temp_str, "%d", temp_idx++);

            char *file_name = malloc(sizeof(TEMPMAT_PREFIX) + sizeof(TEMPMAT_SUBFIX));
            strcpy(file_name, TEMPMAT_PREFIX);
            strcat(file_name, temp_str);
            strcat(file_name, TEMPMAT_SUBFIX);

            FILE *file = fopen(file_name, "w");

            if (file == NULL)
            {
                printf("Open file failed\n");
            }
            else
            {
                for (int i = 0; i < HEIGHT; ++i)
                {
                    for (int j = 0; j < WIDTH; ++j)
                    {
                        int index = i * WIDTH + j;
                        fprintf(file, "%f ", pTemper[index]);
                    }
                    fprintf(file, "\n");
                }
                fclose(file);
            }

            // Convert binary array to bmp image
            bmp_img img;
            bmp_img_init_df(&img, WIDTH, HEIGHT);

            char bmp_str[3];
            sprintf(bmp_str, "%d", bmp_idx++);

            for (unsigned int i = 0; i < HEIGHT; ++i)
            {
                for (unsigned int j = 0; j < WIDTH; ++j)
                {
                    int index = WIDTH * i + j;

                    unsigned char y = pVideoData->frame_yuv_data[index] >> 8;
                    unsigned char u = 0, v = 0;
                    if (i % 2 == 0)
                    {
                        u = pVideoData->frame_yuv_data[index] & 0xFF;
                        v = pVideoData->frame_yuv_data[index + 1] & 0xFF;
                    }
                    else
                    {
                        u = pVideoData->frame_yuv_data[index - 1] & 0xFF;
                        v = pVideoData->frame_yuv_data[index] & 0xFF;
                    }

                    unsigned char r = y + 1.403 * (v - 128);
                    unsigned char g = y - 0.343 * (u - 128) - 0.714 * (v - 128);
                    unsigned char b = y + 1.770 * (u - 128);

                    r = r < 0 ? 0 : (r > 255) ? 255
                                              : r;
                    g = g < 0 ? 0 : (g > 255) ? 255
                                              : g;
                    b = b < 0 ? 0 : (b > 255) ? 255
                                              : b;

                    bmp_pixel_init(&img.img_pixels[i][j], r, g, b);
                }
            }

            file_name = malloc(sizeof(IMAGE_PREFIX) + sizeof(IMAGE_SUBFIX));
            strcpy(file_name, IMAGE_PREFIX);
            strcat(file_name, bmp_str);
            strcat(file_name, IMAGE_SUBFIX);

            bmp_img_write(&img, file_name);
            bmp_img_free(&img);

            sendto(client_socketfd, file_name, strlen(file_name), 0, (struct sockaddr *)&yolo_addr, sizeof(yolo_addr));
            printf("Send message %s to server \n", file_name);
        }

        // memcpy(yuv422Data, pVideoData->frame_yuv_data, WIDTH * HEIGHT * 2);
        // SDL_LockYUVOverlay(Overlay);
        // memcpy(Overlay->pixels[0], yuv422Data, WIDTH * HEIGHT * 2);
        // SDL_UnlockYUVOverlay(Overlay);
        // SDL_DisplayYUVOverlay(Overlay, &Rect);
    }
}

// void img2video(char *input_files, int framerate, char *output_file, char *video_format, int crf)
// {
//     char *command = malloc(300 * sizeof(char));
//     char framerate_str[2];
//     char crf_str[2];

//     sprintf(framerate_str, "%d", framerate);

//     strcpy(command, "ffmpeg -framerate ");

//     strcat(command, framerate_str);
//     strcat(command, " -i ");
//     strcat(command, input_files);
//     strcat(command, " -c:v libx264 -r ");
//     strcat(command, framerate_str);
//     strcat(command, " -pix_fmt ");
//     strcat(command, video_format);

//     sprintf(crf_str, "%d", crf);

//     strcat(command, " -crf ");
//     strcat(command, crf_str);
//     strcat(command, " -y ");
//     strcat(command, output_file);

//     printf("Executing command: %s\n", command);
//     system(command);
// }

int clear_folder(char *dirname)
{
    DIR *dir;
    struct dirent *entry;

    dir = opendir(dirname);
    if (dir == NULL)
    {
        printf("Open folder failed\n");
        return -1;
    }

    while ((entry = readdir(dir)) != NULL)
    {
        if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0)
        {
            char filepath[20];
            strcpy(filepath, dirname);
            strcat(filepath, "/");
            strcat(filepath, entry->d_name);

            if (remove(filepath) != 0)
            {
                printf("Remove file failed\n");
                closedir(dir);
                return -1;
            }
        }
    }

    printf("Clear folder %s successfully\n", dirname);

    closedir(dir);
    return 0;
}