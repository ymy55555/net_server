#if 0
#include "klist.h"

int main()
{
    pk_list pk;
	cli_data cdata = {0};
	void **client_data;
	pcli_data pdata;
	*client_data = (void **)malloc(sizeof(cli_data));
	cdata.client_port = 5001;
    init_klist(&pk);
	insert_klist(pk, cdata);
	getdata_klist(pk, 5001, client_data);
	//指针在下层，数据在上层
	pdata = (pcli_data)*client_data;
	printf("-------------port:%d\n", pdata->client_port);
    return 0;
}
#endif

