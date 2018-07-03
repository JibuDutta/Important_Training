#include"header.h"
#define SERVER_QUEUE_NAME "/sp_example"
#define QUEUE_PERMISSIONS 0660
#define MAX_MESSAGES 10
#define MAX_SIZE 256
#define MAX_BUFFER_SIZE MAX_SIZE + 10



int main(int argc,char **argv)
{
	char client_queue_name[64];

	mqd_t qd_server,qd_client;

	//create the client queue for receiving messages from server
	sprintf(client_queue_name,"/sp_example %d",getpid());

	struct mq_attr attr;
	attr.mq_flags = 0;
	attr.mq_maxmsg = MAX_MESSAGES;
	attr.mq_msgsize = MAX_SIZE;
	attr.mq_curmsgs = 0;

	if(qd_client = mq_open(client_queue_name,O_RDONLY | O_CREAT,QUEUE_PERMISSIONS,&attr) == -1)
	{
		perror("client:mq_open:");
		exit(1);

	}
	if((qd_server = mq_open(SERVER_QUEUE_NAME,O_RDWR))==-1)
	{
		perror("Client:mq_server(open):");
		exit(1);
	}
	char in_buffer [MAX_BUFFER_SIZE];
	printf("Ask for token(press <ENTER>): ");
	char temp_buf[10];

	while(fgets(temp_buf,2,stdin)){
	
		//send message to server
		if(mq_send(qd_server,client_queue_name,strlen(client_queue_name),0)==   -1)
		{
			perror("mq_send");
			exit(0);
		}

		mq_receive(qd_client,in_buffer,MAX_BUFFER_SIZE,NULL);

		//display token received from server
		
		printf("Client received Token from server: %s\n",in_buffer);
		printf("Ask for a token (Press)\n");

	}

	mq_close(qd_client);

	mq_unlink(client_queue_name);

	printf("Client BYE BYE\n");




	return 0;
}
