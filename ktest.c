#if 1
#include "klist.h"
int main(void)
{
    pk_list pk;
	cli_data cdata = {0};
	void **client_data;
	pcli_data pdata;
//client_data = NULL;
#if 1
	client_data = (void **)malloc(sizeof(cli_data));
	if (!client_data)
	{
	    printf("分配内存失败\n");
	    return 0;
	}
#endif
	cdata.client_port = 5001;
	cdata.client_state = 5;
	memcpy(cdata.ip_info, (char *)("911.114.120.119"), IP_LENGTH);
    if (SUCCESS != init_klist(&pk))
    {
        printf("init_klist failed\n");
        free(client_data);
    }
    printf("ok1\n");
	if (SUCCESS != insert_klist(pk, cdata))
	{
	    printf("insert_klist failed\n");
        free(client_data);
	}
	printf("ok2\n");
	int port = 5001;


	if (SUCCESS != getdata_klist(pk, (void *)(&port), GET_CLIENT_PORT, client_data))
	{
	    printf("getdata_klist failed\n");
        free(client_data);
	}

	printf("ok3\n");
	//指针在下层，数据在上层
	pdata = (pcli_data)*client_data;
	printf("-------------port:%d___ip:%s\n", pdata->client_port, pdata->ip_info);
    return 0;
}
/********************************
定义二级指针即便是使用的是一级指针但是二级也必须初始化，
就好比盖房子没有房基上面怎么盖
***********************************/
#endif

