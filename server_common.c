#include "common.h"
#include "server_common.h"

/******************************************************************
function:
parameter:
description:
author:
create date:
modify: 
***************************************************************/


int fd = -1;
pthread_t gtid[3] = {-1, -1, -1};
int gsys_state = 1;

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
	 socklen_t addr_len = sizeof(cinfo);
     while(gsys_state) 
	 {
		newfd = accept(fd, (struct sockaddr *)&cinfo, &addr_len);
		if(newfd > 0)
		{
		    /* 给客户端结构体赋值*/
			stinfo.cli_fd = newfd;
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
	st_cli_info stinfo = {0};
	struct sockaddr_in cinfo = {0};
	char cli_ip_addr[16] = {0};
	
	pthread_detach(pthread_self());
	memcpy(&stinfo, arg, sizeof(stinfo));
	newfd = stinfo.cli_fd;
	memcpy(&cinfo, &stinfo.cinfo, sizeof(cinfo));
	
	if(inet_ntop(AF_INET, (const void *)&cinfo.sin_addr.s_addr, cli_ip_addr, sizeof(cinfo)) != NULL) 
	{
		MY_PRINTF("Client(%s:%d) is connected!\n", cli_ip_addr, ntohs(cinfo.sin_port));
    } 
	else 
	{
        MY_PRINTF("inet_pton false .\n");
        exit(1);
    }
	pthread_t t_read_id, t_write_id;
	pthread_create(&t_read_id, NULL, (void *)read_data_handle, &newfd);
	pthread_create(&t_write_id, NULL, (void *)write_data_handle, &newfd);
	gtid[1] = t_read_id;
	gtid[2] = t_write_id;
    bool tell_flag = true;	
	int detect_pthread(pthread_t tid);
    while(tell_flag)
	{
		if(THREAD_ALIVE == detect_pthread(t_read_id) && THREAD_ALIVE == detect_pthread(t_write_id))
		{
		    MY_PRINTF("read and write thread is exited\n");
			tell_flag = false;
		}			
	}
	close(newfd);
	pthread_exit(NULL);
	return SUCCESS;
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
				close(newfd);
				break;
				//强制使写线程退出，此时写线程的写操作返回-1，--------------->未实现
			}
			MY_PRINTF("====client send data: %s\n",buf);//标识客户端------------->未实现
		}
	}
	pthread_exit(NULL);
	return SUCCESS;
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
	select(0 + 1,&set,NULL,NULL,NULL);
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
				close(newfd);
			    break;

			}
			if(wn == 0)
			{
				MY_PRINTF("client is close,server system will quit...\n");
				close(newfd);
				break;
			}
	    } 
    }	
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
	   return THREAD_ALIVE;
	}		
	else if(EINVAL == pthread_kill_err)
	{
	   //Illegal signal
		return THREAD_EXIT;
	}
	else
	{		
		 //thread is alive
		 return THREAD_ILLEGAL_SIGNAL;
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
		//释放资源
    }
    exit(1);
}
