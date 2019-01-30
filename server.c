#include "server_common.h"
#include "common.h"
#include "klist.h"
int g_sys_state = 1;
pk_list g_pklist;

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
        MY_PRINTF("Init_klist failed.\n");
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

/************待实现***********
1.对所有线程状态给给与检测和控制机制
2.实现高并发服务器
3.内核链表标识线程，并设置用户名，并对子线程中的读写线程监控，
4.互斥锁和读写锁
5.增加断电重传机制，可以借助临时文件缓存单次读写操作实现
7.增加动态数据源传输协议，协议格式和长度可以通过文本或者其他指定，且可以引用现有协议。
8.对整个运行追加全局控制
9.对每个客户端数据追加标识，且每个客户端单独终端
10.数据规范化，比如对齐之类
****************************/
