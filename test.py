import time

file = open('cmd_log.txt', 'a')
file.write(str(time.localtime()))
file.write('\n')
file.close()