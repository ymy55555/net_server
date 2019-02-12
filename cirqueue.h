#ifndef _CIRQUEUE_H_
#define _CIRQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "common.h"

#define CIRCLE_QUEUE_SIZE 10000

typedef int cirqueue_datatype;//这里的int可以替换为其他数据结构来实现队列数据类型更新

typedef struct cirqueue{
      cirqueue_datatype cirqueue_data[CIRCLE_QUEUE_SIZE];//这里定义数据那类型主要是为了将来数据灵活性，可以用void *替换简化
      int rear,front;
}cir_queue,*cir_pqueue;

extern int cirqueue_init(cir_pqueue *ppq);
extern int cirqueue_insert(cir_pqueue pq,cirqueue_datatype insert_data);
extern int cirqueue_out(cir_pqueue pq,cirqueue_datatype *out_data);
extern bool cirqueue_full(cir_pqueue pq);
extern bool cirqueue_empty(cir_pqueue pq);
extern void cirqueue_display(cir_pqueue pq);
#endif
