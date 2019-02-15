#include "server_common.h"
#include "common.h"
#include "klist.h"
#include "cirqueue.h"
int g_sys_state = 1;
pk_list g_pklist;
cir_pqueue g_cirpq;

int main(int argc,char *argv[])
{
	signal(SIGINT, common_handle_sig);
    signal(SIGTERM, common_handle_sig);
	if(2 != argc)
	{
		MY_PRINTF("The number of parameters is incorrect.\n");
		return NORMAL_EXIT;
	}
	if (SUCCESS != init_klist(&g_pklist))
    {
        MY_PRINTF("Init klist failed.\n");
        return NORMAL_EXIT;
    }
    if(SUCCESS != cirqueue_init(&g_cirpq))
    {	
        MY_PRINTF("Init circle queue failed.\n");
        return NORMAL_EXIT;
    }
    if(SUCCESS != socKet_init(argv[1]))
	{
		MY_PRINTF("soctet init is failed.\n");
		return NORMAL_EXIT;
	}
		
	if(SUCCESS != create_main_thread())
	{
	    MY_PRINTF("main thread create init is failed.\n");
		return NORMAL_EXIT;
	}
	return NORMAL_EXIT;
}

//功能持续更新中，敬请期待。。。
