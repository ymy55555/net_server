#include "cirqueue.h"


//初始化
int cirqueue_init(cir_pqueue *ppq)
{
      *ppq = (cir_pqueue)malloc(sizeof(cir_queue));
      if(NULL == *ppq)
      {
	    MY_PRINTF("malloc failed");
	    return FAILURE;
      }

      (*ppq)->front = CIRCLE_QUEUE_SIZE-1;
      (*ppq)->rear = (*ppq)->front;
	  return SUCCESS;
}
//入队
int cirqueue_insert(cir_pqueue pq,cirqueue_datatype insert_data)
{
      if(true == cirqueue_full(pq))
      {
	   // MY_PRINTF("The loop pqueue is full and the team fails to enter.\n");
	    return FAILURE;
      }

      pq->rear = (pq->rear+1)%CIRCLE_QUEUE_SIZE;
      pq->queue_data[pq->rear] = insert_data;

      return SUCCESS;
}

//出队
int cirqueue_out(cir_pqueue pq,cirqueue_datatype *out_data)
{
      if(true == cirqueue_empty(pq))
      {
	   // MY_PRINTF("circle queue is empty\n");
	    return FAILURE;
      }

      pq->front = (pq->front+1)%CIRCLE_QUEUE_SIZE;
      *out_data = pq->queue_data[pq->front];

      return SUCCESS;
}

//判断满
bool cirqueue_full(cir_pqueue pq)
{
      if(pq->front == pq->rear+1)
	    return SUCCESS;
      else
	    return FAILURE;
}

//判断空
bool cirqueue_empty(cir_pqueue pq)
{
      if(pq->front == pq->rear)
	    return SUCCESS;
      else
	    return FAILURE;
}

//显示队列所有数据
void cirqueue_display(cir_pqueue pq)
{
      int i;
      char cli_ip_addr[16] = {0};
      if(SUCCESS == cirqueue_empty(pq))
      {
           return;
      }
	  printf("\n---------------circle queue data start---------------\n");
      for(i=(pq->front+1)%CIRCLE_QUEUE_SIZE;i!=(pq->rear+1)%CIRCLE_QUEUE_SIZE;i=(i+1)%CIRCLE_QUEUE_SIZE)
	  {
	     if(inet_ntop(AF_INET, (const void *)&pq->queue_data[i].cinfo.sin_addr.s_addr, cli_ip_addr, sizeof(pq->queue_data[i].cinfo)) != NULL) 
    	 {
             printf("client :%d\n", i);
             printf("     IP:%s\n", cli_ip_addr);
             printf("   PORT:%d\n", ntohs(pq->queue_data[i].cinfo.sin_port));
         } 
    	 else 
    	 {
            MY_PRINTF("queue info printf is failed.\n");
            return;
         }
         printf("\n");
	  }
	  printf("---------------circle queue data end--------------\n");
      printf("\n");
      return;
}
