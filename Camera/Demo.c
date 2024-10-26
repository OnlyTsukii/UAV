#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/mman.h>
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
#include <stdint.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <libusb.h>
#include <arpa/inet.h>
#include <dirent.h>
#include <semaphore.h>
#include <signal.h>

#define BUFFER_SIZE 64
#define WIDTH 640
#define HEIGHT 512
#define SHM_NAME "/img_shm"
#define SEM_NAME "/img_sem"
#define SHM_SIZE WIDTH * HEIGHT * 2


bool exit_flag = false;
bool started = true;
char *ctrl_id = NULL;

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

int shm_fd = 0;
short *shm_ptr = NULL;
sem_t *sem = NULL;

int serailCallBack(int id, guide_usb_serial_data_t *pSerialData);
int connectStatusCallBack(int id, guide_usb_device_status_e deviceStatus);
int frameCallBack(int id, guide_usb_frame_data_t *pVideoData);
int start_camera();
int shm_init();
int write_to_shm(short* yuv_data);
void signal_handler(int sig);


double tick(void)
{
    struct timeval t;
    gettimeofday(&t, 0);
    return t.tv_sec + 1E-6 * t.tv_usec;
}

void signal_handler(int sig) {
    munmap(shm_ptr, SHM_SIZE);
    close(shm_fd);
    shm_unlink(SHM_NAME);
    sem_close(sem);

    exit(EXIT_SUCCESS);
}

int shm_init(){
    shm_fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, 0777);
    if(shm_fd == -1) {
        printf("shm open failed");
        return -1;
    }

    if(ftruncate(shm_fd, SHM_SIZE) == -1) {
        printf("ftruncate failed");
        return -1;
    }

    shm_ptr = mmap(0, SHM_SIZE, PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if(shm_ptr == MAP_FAILED) {
        printf("map memory failed");
        return -1;
    }


    sem = sem_open(SEM_NAME, O_CREAT, 0777, 1);
    if(sem == SEM_FAILED) {
        printf("sem open failed");
        return -1;
    }

    return 0;
}

int write_to_shm(short* yuv_data){

    sem_post(sem);
    sem_wait(sem);

    for(int i = 0; i < SHM_SIZE / 2; ++i) {
        shm_ptr[i] = yuv_data[i];
    }

    sem_post(sem);

    return 0;
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
            exit_flag = true;
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

int frameCallBack(int id, guide_usb_frame_data_t *pVideoData)
{
    switch (id)
    {
    case 1:
        FPS++;
        if ((tick() - startTime) > 1)
        {
            startTime = tick();
            // printf("FPS-------------------------%d\n", FPS);
            FPS = 0;
        }

        if (started)
        {
            write_to_shm(pVideoData->frame_yuv_data);
            // printf("write %d bytes to shm, number %d\n", pVideoData->frame_yuv_data_length * 2, count);
            count++;
        }

        // memcpy(yuv422Data, pVideoData->frame_yuv_data, WIDTH * HEIGHT * 2);
        // SDL_LockYUVOverlay(Overlay);
        // memcpy(Overlay->pixels[0], yuv422Data, WIDTH * HEIGHT * 2);
        // SDL_UnlockYUVOverlay(Overlay);
        // SDL_DisplayYUVOverlay(Overlay, &Rect);
    }
}

int start_camera()
{
    if (signal(SIGINT, signal_handler) == SIG_ERR) {
        printf("Register signal handler failed");
        return -1;
    }

    // Setting a Log Level
    int ret = guide_usb_setloglevel(LOG_LEVEL_INFO);

    if (ret != 0)
    {
        printf("Set log level failed.");
        return -1;
    }

    // USB device precheck
    while (1)
    {
        int ret = libusb_init(&gd_ctx);
        if (ret < 0)
        {
            printf("libusb_init fail:%d\n", ret);
            usleep(1000000);
            continue;
        }
        else
        {
            printf("libusb_init ok\n");
            break;
        }
    }

    while (1)
    {
        gd_dev_handle = libusb_open_device_with_vid_pid(gd_ctx, 0x04b4, 0xf7f7);
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

    ret = shm_init();
    if (ret != 0)
    {
        return -1;
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
        printf("Could not initialize SDL - %s\n", SDL_GetError());
        return -1;
    }

    Surface = SDL_SetVideoMode(WIDTH, HEIGHT, 24, SDL_SWSURFACE);
    if (!Surface)
    {
        printf("Create video mode error ! \n");
        return -1;
    }

    // Overlay = SDL_CreateYUVOverlay(WIDTH, HEIGHT, SDL_UYVY_OVERLAY, Surface);
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

    // Run forever
    // socket_serve();
    while (true)
    {   
        usleep(1000000);
    }
    
    munmap(shm_ptr, SHM_SIZE);
    close(shm_fd);
    sem_close(sem);

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

    return 0;
}

int main(void)
{
    start_camera();

    return 0;
}