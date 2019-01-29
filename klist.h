#ifndef _KERNEL_H_
#define _KERNEL_H_

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define IP_LENGTH 16

typedef struct klist
{
      void *clidata;
      struct list_head list;
  
}k_list,*pk_list;

typedef struct client_data
{
	int read_thread_id;
	int write_thread_id;
	int client_port;
	char ip_info[IP_LENGTH];
}cli_data, *pcli_data;

extern int init_klist(pk_list *pk);
extern int getdata_klist(pk_list h,int port, pcli_data *pdata);

extern int insert_klist(pk_list h,cli_data data);
extern int delet_kdata(pk_list h,int port);

#endif


