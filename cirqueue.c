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
      pq->cirqueue_data[pq->rear] = insert_data;

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
      *out_data = pq->cirqueue_data[pq->front];

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
	  printf("circle queue data start:\n");
      for(i=(pq->front+1)%CIRCLE_QUEUE_SIZE;i!=(pq->rear+1)%CIRCLE_QUEUE_SIZE;i=(i+1)%CIRCLE_QUEUE_SIZE)
	  {
	      printf("%d\t",pq->cirqueue_data[i]);
	  }
	  printf("\ncircle queue data end:\n");
      printf("\n");
      return;
}
