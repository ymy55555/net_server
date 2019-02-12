#if CIRQUEUE
#include "cirqueue.h"

int main(void)
{
      cirqueue_datatype data;
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
    		    scanf("%d",&data);
        	    if(data == -1){break;}
        		cirqueue_insert(pq,data);
        		cirqueue_display(pq);
    		}
    		else if('2' == gchar)
    		{
    		   cirqueue_out(pq,&data);
    		   cirqueue_display(pq);
    		}else if('3' == gchar)
    		{
               break;
    		}
      }
      return 0;
}
#endif
