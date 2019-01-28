#ifndef __SERVER_COMMON_H__
#define __SERVER_COMMON_H__

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

extern int cli_data_handle(void *arg);
extern int read_data_handle(void *arg);
extern int write_data_handle(void *arg);
extern int detect_pthread(pthread_t tid);
extern int create_main_thread(void);
extern int socKet_init(char *argv[]);
extern void common_handle_sig(int signo);

#endif
