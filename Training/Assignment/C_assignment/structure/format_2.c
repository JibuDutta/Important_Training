#include<stdio.h>

struct frame_format
{
		short int source_port;
		short int destination_port;
		int sequence_no;
		int ack_no;
		int header_length:4;
		int reserved:6;
		int code_bits:6;
		short int window;
		short int checksum;
		short int urgent;

}FRAME;
int main()
{

		printf("THE SIZE OF THIS FRAME STRUCTURE is:%d\n\n",sizeof(struct frame_format));
		return 0;
}
