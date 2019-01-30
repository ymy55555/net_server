#include "common.h"
#include "klist.h"
//初始化内核链表所在结构体 
int init_klist(pk_list *pk)
{
    *pk =(pk_list)malloc(sizeof(k_list));
    if(NULL == *pk)
    {
	   MY_PRINTF("kernel list malloc failed");
	   return FAILURE;
    }
    INIT_LIST_HEAD(&(*pk)->list);
	return SUCCESS;
}

//根据某项数据取出链表中的数据,或者查询
int getdata_klist(pk_list h,void *single_data, int data_flag, void **client_data)
{
    pk_list t;
	pcli_data pdata;      
	
    list_for_each_entry(t,&h->list,list)
   {
      pdata = (pcli_data)t->clidata;
	  switch(data_flag)
	  {
          case GET_CLIENT_FD:
          	   if(*(int *)single_data == pdata->client_fd)
	           {
	     			*client_data = t->clidata;
		 			return SUCCESS;
	 		   }
	 		   break;
		  case GET_READ_THREAD_ID:
		        if(*(int *)single_data == pdata->read_thread_id)
	           {
	     			*client_data = t->clidata;
		 			return SUCCESS;
	 		   }
	 		   break;
		  case GET_WRITE_THREAD_ID:
		       if(*(int *)single_data == pdata->write_thread_id)
	           {
	     			*client_data = t->clidata;
		 			return SUCCESS;
	 		   } 
	 		   break;
		  case GET_CLIENT_PORT:
		       if(*(int *)single_data == pdata->client_port)
	           {
	     			*client_data = t->clidata;
		 			return SUCCESS;
	 		   } 
	 		   break;
	 	
	 	  case GET_LIENT_STATE:
	 	       if(*(int *)single_data == pdata->client_state)
	           {
	     			*client_data = t->clidata;
		 			return SUCCESS;
	 		   } 
	 		   break; 
		  case GET_CLIENT_IP_INFO:
		       if(0 == strcmp((char *)single_data, pdata->ip_info))
	           {
	           	   *client_data = t->clidata;
		 			return SUCCESS;
	 		   } 
	 		   break;	 	       
	 	  default:break;
	  }
   }
   MY_PRINTF("No correlation data found.\n");
   return FAILURE;
}

//向链表插入数据
int insert_klist(pk_list h,cli_data *data)
{
    pk_list temp;
    cli_data *tmp_data;
    tmp_data = (cli_data *)malloc(sizeof(cli_data));
    if(NULL == tmp_data)
    {
       MY_PRINTF("Insert kernel list of client data failed.\n");
	   return FAILURE;
	}	
	temp = (pk_list)malloc(sizeof(k_list));
	if(NULL == temp)
    {
       MY_PRINTF("Insert kernel list of client data failed.\n");
	   return FAILURE;
	}	
	memcpy(tmp_data, data, sizeof(cli_data));
    temp->clidata = (void *)tmp_data;
    list_add_tail(&temp->list,&h->list);
	return SUCCESS;
}

//链表中删除指定选项,根据某项数据
int delet_kdata(pk_list h, void *single_data, int data_flag)
{

    pk_list p,t;
	pcli_data pdata;
    p = list_entry(h->list.prev,k_list,list);//指向头节点的prev
    while(p != h)
    {
      pdata = (pcli_data)p->clidata; 
      switch(data_flag)
	  {
          case GET_CLIENT_FD:
          	   if(pdata->client_fd == *(int *)single_data)
			   {
			       t = p;
			       p = list_entry(p->list.prev,k_list,list);//当前节点prev指向前面节点
			       list_del(&t->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
		  case GET_READ_THREAD_ID:
		       if(pdata->read_thread_id == *(int *)single_data)
			   {
			       t = p;
			       p = list_entry(p->list.prev,k_list,list);//当前节点prev指向前面节点
			       list_del(&t->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
		  case GET_WRITE_THREAD_ID:
		       if(pdata->write_thread_id == *(int *)single_data)
			   {
			       t = p;
			       p = list_entry(p->list.prev,k_list,list);//当前节点prev指向前面节点
			       list_del(&t->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
		  case GET_CLIENT_PORT:
		       if(pdata->client_port == *(int *)single_data)
			   {
			       t = p;
			       p = list_entry(p->list.prev,k_list,list);//当前节点prev指向前面节点
			       list_del(&t->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
	 	  case GET_LIENT_STATE:
	 	       if(pdata->client_state== *(int *)single_data)
			   {
			       t = p;
			       p = list_entry(p->list.prev,k_list,list);//当前节点prev指向前面节点
			       list_del(&t->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break; 
		  case GET_CLIENT_IP_INFO:
		       if(0 == strcmp((char *)single_data, pdata->ip_info))
			   {
			       t = p;
			       p = list_entry(p->list.prev,k_list,list);//当前节点prev指向前面节点
			       list_del(&t->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;	 	       
	 	  default:break;
	  }
      
    }
	MY_PRINTF("delet data failed from kernel list.\n");
	return FAILURE;
}

//根据数据中的某项替换链表当前节点
int replace_klist(pk_list h,void *single_data, int data_flag, cli_data data)
{

    pk_list p;
	pcli_data pdata;
	pk_list temp;
    temp = (pk_list)malloc(sizeof(k_list));
	if(NULL == temp)
	{
	   MY_PRINTF("replace kernel list of client data failed.\n");
	   return FAILURE;
	}
	temp->clidata = (void *)(&data);
    p = list_entry(h->list.prev,k_list,list);//指向头节点的prev
    while(p != h)
    {
      pdata = (pcli_data)p->clidata; 
      switch(data_flag)
	  {
          case GET_CLIENT_FD:
          	   if(pdata->client_fd == *(int *)single_data)
			   {
				   list_replace(&p->list, &temp->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
		  case GET_READ_THREAD_ID:
		       if(pdata->read_thread_id == *(int *)single_data)
			   {
			       list_replace(&p->list, &temp->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
		  case GET_WRITE_THREAD_ID:
		       if(pdata->write_thread_id == *(int *)single_data)
			   {
			       list_replace(&p->list, &temp->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
		  case GET_CLIENT_PORT:
		       if(pdata->client_port == *(int *)single_data)
			   {
			       list_replace(&p->list, &temp->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;
	 	  case GET_LIENT_STATE:
	 	       if(pdata->client_state== *(int *)single_data)
			   {
			       list_replace(&p->list, &temp->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break; 
		  case GET_CLIENT_IP_INFO:
		       if(0 == strcmp((char *)single_data, pdata->ip_info))
			   {
			       list_replace(&p->list, &temp->list);
				   return SUCCESS;
			   }
			   else
			   {
			       p = list_entry(p->list.prev,k_list,list);
			   }
	 		   break;	 	       
	 	  default:break;
	  }
      
    }
	MY_PRINTF("replace data failed from kernel list.\n");
	return FAILURE;
}

//显示链表所有数据
void show_klist(pk_list h)
{
    pk_list t;
    pcli_data client_data;
    printf("\n\n");
    MY_PRINTF("Start kernel list traverse all data.\n\n");
    int i = 0;
    list_for_each_entry(t,&h->list,list)
    {
        client_data = (pcli_data)t->clidata;
        printf("data%d:\n", ++i);
        printf("client_fd:%d\n", client_data->client_fd);
        printf("client_port:%d\n", client_data->client_port);
        printf("client_state:%d\n", client_data->client_state);
        printf("ip_info:%s\n", client_data->ip_info); 
        printf("read_thread_id:%d\n", client_data->read_thread_id);
        printf("write_thread_id:%d\n\n", client_data->write_thread_id);
           

    }
    return;
}


