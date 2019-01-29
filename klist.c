#include "klist.h"
#include "common.h"
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

//根据标识取出链表中的数据
int getdata_klist(pk_list h,int port, void **client_data)
{
    pk_list t;
	pcli_data pdata;
    list_for_each_entry(t,&h->list,list)
   {
      pdata = (pcli_data)t->clidata;
	  if(port == pdata->client_port)
	  {
	     *client_data = t->clidata;
		 return SUCCESS;
	  }
   }
   MY_PRINTF("No correlation data found.\n");
   return FAILURE;
}

//向链表插入数据
int insert_klist(pk_list h,cli_data data)
{
    pk_list temp;
	temp = (pk_list)malloc(sizeof(k_list));
	if(NULL == temp)
    {
       MY_PRINTF("insert kernel list of client data failed.\n");
	   return FAILURE;
	}	
    temp->clidata = (void *)(&data);
    list_add_tail(&temp->list,&h->list);
	return SUCCESS;
}

//链表中删除指定选项,根据客户所在
int delet_kdata(pk_list h,int port)
{

    pk_list p,t;
	pcli_data pdata;
    p = list_entry(h->list.prev,k_list,list);//指向头节点的prev
    while(p != h)
    {
      pdata = (pcli_data)p->clidata; 
      if(pdata->client_port == port)
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
    }
	MY_PRINTF("delet data failed from kernel list.\n");
	return FAILURE;
}



