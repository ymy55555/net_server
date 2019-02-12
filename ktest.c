#if debug_klist
#include "klist.h"
int main(void)
{
    pk_list pk;
	cli_data cdata = {0}, replace_data = {0};
	void **client_data;
	pcli_data pdata;
#if 1
	client_data = (void **)malloc(sizeof(cli_data));
	if (!client_data)
	{
	    printf("分配内存失败\n");
	    return 0;
	}
#endif
    if (SUCCESS != init_klist(&pk))
    {
        MY_PRINTF("init_klist failed\n");
        free(client_data);
        return 0;
    }

    
	cdata.client_port = 5001;
	cdata.client_state = 5;
	memcpy(cdata.ip_info, (char *)("911.114.120.119"), IP_LENGTH);
	if (SUCCESS != insert_klist(pk, &cdata))
	{
	    MY_PRINTF("insert_klist failed\n");
        free(client_data);
        return 0;
	}
#if 1
    cdata.client_port = 5002;
    cdata.client_state = 10;
    memcpy(cdata.ip_info, (char *)("111.112.155.179"), IP_LENGTH);
    if (SUCCESS != insert_klist(pk, &cdata))
    {
        MY_PRINTF("insert_klist failed\n");
        free(client_data);
        return 0;
    }
#endif 

#if 1
    cdata.client_port = 5006;
    cdata.client_state = 50;
    memcpy(cdata.ip_info, (char *)("333.555.555.179"), IP_LENGTH);
    if (SUCCESS != insert_klist(pk, &cdata))
    {
        MY_PRINTF("insert_klist failed\n");
        free(client_data);
        return 0;
    }
#endif 

    int port = 5002;
    if(SUCCESS != delet_kdata(pk, (void *)(&port), GET_CLIENT_PORT))
    {
        MY_PRINTF("Delet data failed.\n");
        free(client_data);
        return 0;
    }

    port = 5001;
    replace_data.client_state = 100;
    replace_data.client_port = 5001;
    memcpy(replace_data.ip_info, (char *)("111.222.333.444"), IP_LENGTH);
    if(SUCCESS != replace_klist(pk, (void *)(&port), GET_CLIENT_PORT, replace_data))
    {
       MY_PRINTF("Replace data failed.\n");
    }else
    {
    
	    printf("\n");
        MY_PRINTF("kernel list repace data is success.\n");
    }

    
    show_klist(pk);
    
    port = 5006;
	if (SUCCESS == getdata_klist(pk, (void *)(&port), GET_CLIENT_PORT, client_data))
	{
        //指针在下层，数据在上层
        pdata = (pcli_data)*client_data;
        MY_PRINTF("get_data________port:%d___ip:%s\n", pdata->client_port, pdata->ip_info);
	}else
	{
	    MY_PRINTF("getdata_klist failed\n");
	}
	
#if 1
	port = 5001;
	if (SUCCESS == getdata_klist(pk, (void *)(&port), GET_CLIENT_PORT, client_data))
	{
        //指针在下层，数据在上层
        pdata = (pcli_data)*client_data;
        MY_PRINTF("get_data___________port:%d___ip:%s\n", pdata->client_port, pdata->ip_info);
	}
	else
	{
	    MY_PRINTF("getdata_klist failed\n");
	}
	

#endif


    
    free(client_data);
    return 0;

    
}
/********************************
定义二级指针即便是使用的是一级指针但是二级也必须初始化，
就好比盖房子没有房基上面怎么盖
***********************************/
#endif

