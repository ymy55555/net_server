#include "common.h"
#include "server_common.h"
#include "klist.h"
#include "cirqueue.h"
/******************************************************************
function:
parameter:
description:
author:
create date:
modify: 
***************************************************************/


int fd = -1;
extern int g_sys_state;
extern pk_list g_pklist;
extern cir_pqueue g_cirpq;
int socKet_init(char *argv1)
{
    //建立主动套接字
    if((fd = socket(AF_INET,SOCK_STREAM,0)) == -1)
    {
	    MY_PRINTF("server creat socket failed\n");
		return FAILURE;
	    
    }
	
	//快速重启
    int restart_ip = 1;
    setsockopt(fd,SOL_SOCKET,SO_REUSEADDR,(const char*)&restart_ip,sizeof(int));
	
    //绑定服务器IP地址
    struct sockaddr_in soi;
    bzero(&soi,sizeof(soi));
    soi.sin_family = AF_INET;
    soi.sin_port = htons(atoi(argv1));
    soi.sin_addr.s_addr = htonl(INADDR_ANY);
    if(bind(fd,(struct sockaddr*)&soi,sizeof(soi)) == -1)
    {
	   MY_PRINTF("server socket bind failed.\n"); 
       return FAILURE;   
    }
	//连接非阻塞
    if(ioctl(fd, FIONBIO, &restart_ip) < 0)
	{		
	   MY_PRINTF("ioctl FIONBIO failed.\n"); 
       return FAILURE;   
	}
	 
    //设置侦听套接字和队列长度，把主动套接字变为被动套接字
    if(listen(fd,SOMAXCONN) == -1)
    {
	   MY_PRINTF("server listen failed.\n"); 
       return FAILURE;   
    }
	return SUCCESS;
}

int create_main_thread(void)
{
	 pthread_t tid;
	 int newfd = -1;
	 st_cli_info stinfo;
	 struct sockaddr_in cinfo;
	 cirqueue_datatype cirq_data;
	 socklen_t addr_len = sizeof(cinfo);
     while(g_sys_state) 
	 {
		newfd = accept(fd, (struct sockaddr *)&cinfo, &addr_len);
		if(newfd > 0)
		{
		   if(SUCCESS != cirqueue_insert(g_cirpq, newfd))
		   {
               MY_PRINTF("circle queue is full, please connect later!\n"); 
		   }
		}
		if(SUCCESS == cirqueue_out(g_cirpq, &cirq_data))
		{
		    /* 给客户端结构体赋值*/
			stinfo.cli_fd = cirq_data;
			memcpy(&stinfo.cinfo, &cinfo, sizeof(cinfo));		
			pthread_create(&tid, NULL, (void *)cli_data_handle, (void *)&stinfo);
		}
    }
    close(fd);
	return SUCCESS;	 
}

int cli_data_handle(void *arg)
{
	int newfd = -1;
	char *pthread_name;
	st_cli_info stinfo = {0};
	struct sockaddr_in cinfo = {0};
	char cli_ip_addr[16] = {0};
	cli_data cdata = {0};
	pthread_detach(pthread_self());
	memcpy(&stinfo, arg, sizeof(stinfo));
	newfd = stinfo.cli_fd;

	pthread_name = (char *)malloc(50);
	if(NULL == pthread_name)
	{
       goto PTHREAD_EXIT;
	}
	sprintf(pthread_name, "client_main_pthread_%d", newfd);
    prctl(PR_SET_NAME, (unsigned long)(*pthread_name), 0, 0, 0);//多余操作，但提供了一种简洁的标识线程的方法
    
	memcpy(&cinfo, &stinfo.cinfo, sizeof(cinfo));
	
	if(inet_ntop(AF_INET, (const void *)&cinfo.sin_addr.s_addr, cli_ip_addr, sizeof(cinfo)) != NULL) 
	{
		MY_PRINTF("Client(IP:%s--PORT:%d) is connected!\n", cli_ip_addr, ntohs(cinfo.sin_port));
    } 
	else 
	{
        MY_PRINTF("inet_pton false .\n");
        goto PTHREAD_EXIT;
    }
	pthread_t t_read_id, t_write_id;
	pthread_create(&t_read_id, NULL, (void *)read_data_handle, &newfd);
	pthread_create(&t_write_id, NULL, (void *)write_data_handle, &newfd);
    cdata.client_fd = newfd;
	cdata.read_thread_id = t_read_id;
	cdata.write_thread_id = t_write_id;
	cdata.client_port = ntohs(cinfo.sin_port);
	cdata.client_state = CLIENT_CONNECT;
	memcpy(cdata.ip_info, cli_ip_addr, IP_LENGTH);
	insert_klist(g_pklist, &cdata);
	
    bool tell_flag = true;	
	int detect_pthread(pthread_t tid);
    while(tell_flag)
	{
		if(THREAD_ALIVE != detect_pthread(t_read_id))
		{
		    MY_PRINTF("Client(IP:%s--PORT:%d)--read read thread is exited,wait write pthread wait...\n", cli_ip_addr, ntohs(cinfo.sin_port));
		    pthread_cancel(t_write_id);
		    pthread_join(t_write_id, NULL);
		    MY_PRINTF("Client(IP:%s--PORT:%d)--read and write pthread all exit.\n", cli_ip_addr, ntohs(cinfo.sin_port));
			tell_flag = false;
		}else if(THREAD_ALIVE != detect_pthread(t_write_id))
		{
		
            MY_PRINTF("Client(IP:%s--PORT:%d)--write thread is exited,wait read pthread wait...\n", cli_ip_addr, ntohs(cinfo.sin_port));
            pthread_cancel(t_read_id);
		    pthread_join(t_read_id, NULL);
		    MY_PRINTF("Client(IP:%s--PORT:%d)--read and write pthread all exit.\n", cli_ip_addr, ntohs(cinfo.sin_port));
			tell_flag = false;
		}
	}
PTHREAD_EXIT:
;//使读写线程退出
	close(newfd);
	pthread_exit(NULL);
	return SUCCESS;//象征意义
}


int read_data_handle(void *arg)
{
	int newfd = -1;
	newfd =  (int)(*((int*)arg));
	int ret = -1;
    fd_set set;
    char buf[BUFSIZ] = {0};
	pthread_detach(pthread_self());
	FD_ZERO(&set);
	FD_SET(newfd,&set);
	select(newfd + 1,&set,NULL,NULL,NULL);
	while(1)
	{
		if(FD_ISSET(newfd,&set))
		{          	   
			do{
			   ret = read(newfd,buf,BUFSIZ); //从客户端读取数据	    	     
			}while(ret == -1 || errno == EINTR);//EINTR表示由于信号中断而没有读到任何数据,接着读,是一种阻塞模式的读

			if(ret == 0)
			{//说明调用read之前就已经到达文件尾，表示客户端退出
				MY_PRINTF("client is exit\n");
				if(SUCCESS != delet_kdata(g_pklist, (void *)(&newfd), GET_CLIENT_FD))
                {
                   MY_PRINTF("Delet data failed.\n");
                }
        		close(newfd);
				break;
			}
			MY_PRINTF("====client send data: %s\n",buf);//标识客户端------------->未实现
		}
	}
	pthread_exit(NULL);
	return SUCCESS;//象征意义
}

int write_data_handle(void *arg)
{
	int newfd = -1;
	newfd =  (int)(*((int*)arg));
	int rn = -1, wn = -1;
    fd_set set;
    char buf[BUFSIZ];
    
	pthread_detach(pthread_self());
	FD_ZERO(&set);
	FD_SET(0,&set);
	select(0 + 1, NULL, &set, NULL, NULL);
	while(1) 
	{
         if(FD_ISSET(0,&set))
	    {
			rn = read(0,buf,BUFSIZ);
			if(rn < 0 || 1 == rn)
			{
				continue;
			}
			do{
				wn = write(newfd, buf, rn);
			}while(wn == -1 || errno == EINTR);
       
			if(strncasecmp(buf,"quit",4) == 0)
			{
				MY_PRINTF("you already choose quit server system.server will close...\n");     
			    break;

			}
			if(wn == 0)
			{
				MY_PRINTF("client is close,server system will quit...\n");
				break;
			}
	    }
	    
    }	
    
    close(newfd);
	pthread_exit(NULL);
	return SUCCESS;
} 

int detect_pthread(pthread_t tid)
{	
	int pthread_kill_err;
    pthread_kill_err = pthread_kill(tid,0);
	if(ESRCH == pthread_kill_err)
	{
		
	   //Thread exit
	   return THREAD_EXIT ;
	}		
	else if(EINVAL == pthread_kill_err)
	{
	    //Illegal signal
		return THREAD_ILLEGAL_SIGNAL;
	}
	else
	{		
		 //Thread alive
		 return THREAD_ALIVE ;
	}
	return FAILURE;
}

void common_handle_sig(int signo)
{
    static int sig_handled = 0;  
    signal(SIGINT, SIG_IGN);
    signal(SIGTERM, SIG_IGN);

    if (!sig_handled && (SIGINT == signo || SIGTERM == signo))
    {
         sig_handled = 1;
    }
    exit(-1);
}

