#if CIRQUEUE
#include "cirqueue.h"

int main(void)
{
      cirqueue_datatype insert_qdata, out_qdata;
      cir_pqueue pq;
      char gchar;
      cirqueue_init(&pq);
      while(1)
      {
            printf("Please enter your data below for select:\n");
            printf("\t1:insert circle queue data.\n");
            printf("\t2:out circle queue data.\n");
            printf("\t3:exit\n");
    		gchar = getchar();
    		if('1' == gchar)
    		{
    		    
                MY_PRINTF("please input a integer data:\n");
    		    //入队
    		    qdata.cli_fd = 55;
    		    cirqueue_insert(pq, qdata)
        		cirqueue_display(pq);
    		}
    		else if('2' == gchar)
    		{
    		  //出队
    		   cirqueue_out(pq, &out_qdata)
    		   cirqueue_display(pq);
    		}else if('3' == gchar)
    		{
               break;
    		}
      }
      return 0;
}
#endif
