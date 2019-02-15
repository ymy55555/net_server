#ifndef _CIRQUEUE_H_
#define _CIRQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "common.h"
#include "server_common.h"

#define CIRCLE_QUEUE_SIZE 10000

typedef st_cli_info cirqueue_datatype;
typedef struct cirqueue
{
      cirqueue_datatype queue_data[CIRCLE_QUEUE_SIZE];
      int rear,front;
}cir_queue,*cir_pqueue;

extern int cirqueue_init(cir_pqueue *ppq);
extern int cirqueue_insert(cir_pqueue pq,cirqueue_datatype insert_data);
extern int cirqueue_out(cir_pqueue pq,cirqueue_datatype *out_data);
extern bool cirqueue_full(cir_pqueue pq);
extern bool cirqueue_empty(cir_pqueue pq);
extern void cirqueue_display(cir_pqueue pq);
#endif
