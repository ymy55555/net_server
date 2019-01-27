#ifndef __SERVER_H__
#define __SERVER_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#include <sys/types.h>          
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> 
#include <errno.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <pthread.h>
#include<sys/ioctl.h>
#include<stdbool.h>
#include<signal.h>

typedef struct cli_info{
    int cli_fd;
    struct sockaddr_in cinfo;
	//链表
}st_cli_info;

int cli_data_handle(void *arg);
int read_data_handle(void *arg);
int write_data_handle(void *arg);
int detect_pthread(pthread_t tid);
int create_mian_thread(void);
int soctet_init(char *argv);

#endif
