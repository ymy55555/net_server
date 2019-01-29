#if 1
#include "klist.h"
int main()
{
    pk_list pk;
	cli_data cdata = {0};
	void **client_data;
	pcli_data pdata;
	client_data = (void **)malloc(sizeof(cli_data));
	cdata.client_port = 5001;
	cdata.client_state = 5;
	memcpy(cdata.ip_info, (char *)("911.114.120.119"), IP_LENGTH);
    init_klist(&pk);
	insert_klist(pk, cdata);
	int port = 5001;
	getdata_klist(pk, (void *)port, GET_CLIENT_IP_INFO, client_data);
	//指针在下层，数据在上层
	pdata = (pcli_data)*client_data;
	printf("-------------port:%d___ip:%s\n", pdata->client_port, pdata->ip_info);
    return 0;
}
#endif

