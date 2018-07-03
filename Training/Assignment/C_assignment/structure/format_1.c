#include<stdio.h>
struct ATM_format
{
	/*char virtual_path_identifier:4;
	char generic_flow_control:4;
	char virtual_channel_identifier:4;
	char virtual_path_identifier:4;
	//char VPI2:4;
	char virtual_channel_identifier;
	//char VCI2;
	char cell_loss_priority:1;
	char payload_type_identifier:3;
	char virtual_channel_identifier:4;
//	char VCI3:4;
	char Header_Error_Control ;*/
	
		unsigned int virtual_path_identifier:4;
	unsigned int generic_flow_control:4;
//	unsigned int virtual_channel_identifier:4;
//	unsigned int virtual_path_identifier:4;
	//char VPI2:4;
//	unsigned int virtual_channel_identifier;
	//char VCI2;
	unsigned int  cell_loss_priority:1;
	unsigned  int payload_type_identifier:3;
	unsigned int  virtual_channel_identifier:4;
//	char VCI3:4;
	unsigned int  Header_Error_Control ;


}FORMAT;

int main()
{
		printf("THE SIZE OF THIS STRUCTURE IS:%d\n\n",sizeof(struct ATM_format));
		return 0;

}
