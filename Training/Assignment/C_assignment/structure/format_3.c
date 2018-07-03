#include<stdio.h>

struct format_IPV4
	{
	short int version : 4;
	short int header_length : 4;
	short int service_type : 8;
	short int total_length;
	short int identification;
	short int flags : 4;
	short int fragmentation_offset : 12;
	char TTL;
	char protocol;
	short int header_chksum;
	int src_ip_addr;
	int dest_ip_addr;
	int options : 20;
	int padding : 12;		




	}FORMAT;



int main()
{

		printf("SIZE OF THIS STRUCTURE IS:%d\n\n",sizeof(struct format_IPV4));
		return 0;
}
