#ifndef __COMMON_H__
#define __COMMON_H__

#define SUCCESS 1
#define FAILURE 0
#define NORMAL_EXIT 0

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
#endif
