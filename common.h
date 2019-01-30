#ifndef __COMMON_H__
#define __COMMON_H__

#define SUCCESS 1
#define FAILURE 0
#define NORMAL_EXIT 0
#define IP_LENGTH 16

#define CLIENT_EXIT 0
#define CLIENT_CONNECT 1

#define MY_PRINTF(fmt...)   \
    do {\
        printf("[%s]-%d: ", __FUNCTION__, __LINE__);\
        printf(fmt);\
    }while(0)
		
	
enum THREAD_STATE_FLAG
{
     THREAD_ALIVE = 1,
	 THREAD_EXIT,
	 THREAD_ILLEGAL_SIGNAL,
};	

enum GET_DATA_FLAG
{
     GET_CLIENT_FD = 1,
     GET_READ_THREAD_ID,
     GET_WRITE_THREAD_ID,
     GET_CLIENT_PORT,
     GET_CLIENT_STATE,
     GET_CLIENT_IP_INFO,
};
#endif
