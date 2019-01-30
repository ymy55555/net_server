#ifndef _KERNEL_H_
#define _KERNEL_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"
#include "common.h"

typedef struct klist
{
      void *clidata;
      struct list_head list;
  
}k_list,*pk_list;

typedef struct client_data
{
    int client_fd;
	int read_thread_id;
	int write_thread_id;
	int client_port;
	int client_state;
	char ip_info[IP_LENGTH];
}cli_data, *pcli_data;

extern int init_klist(pk_list *pk);
extern int getdata_klist(pk_list h,void *single_data, int data_flag, void **client_data);
extern int insert_klist(pk_list h,cli_data *data);
extern int delet_kdata(pk_list h, void *single_data, int data_flag);
extern int replace_klist(pk_list h,void *single_data, int data_flag, cli_data data);
extern void show_klist(pk_list h);

#endif


