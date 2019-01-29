#if 1
#include "klist.h"

int main()
{
    pk_list pk;
	cli_data cdata = {0};
	pcli_data *pdata;
	pdata = (pcli_data *)malloc(sizeof(cli_data));
	cdata.client_port = 5001;
    init_klist(&pk);
	insert_klist(pk, cdata);
	getdata_klist(pk, 5001, pdata);
	//指针在下层，数据在上层
	printf("-------------port:%d\n", (*pdata)->client_port);
    return 0;
}
#endif

