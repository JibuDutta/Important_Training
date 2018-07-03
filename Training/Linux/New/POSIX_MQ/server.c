#include"header.h"
#define SERVER_QUEUE_NAME "/sp_example"
#define QUEUE_PERMISSIONS 0660
#define MAX_MESSAGES 10
#define MAX_SIZE 256
#define MSG_BUFFER_SIZE MAX_SIZE + 10
int main(int argc,char **argv)
{
	mqd_t qd_server, qd_client; //queue descriptor
	long token_no = 1; //next token to be given to the client

	printf("Server:Hello World !!!\n");

	struct mq_attr attr;

	attr.mq_flags = 0;
	attr.mq_maxmsg = MAX_MESSAGES;
	attr.mq_msgsize = MAX_SIZE;
	attr.mq_curmsgs = 0;

	if(qd_server = mq_open(SERVER_QUEUE_NAME,O_RDONLY | O_CREAT,QUEUE_PERMISSIONS, &attr) == -1)
	{
		perror("mq_open(server) -----:");
		exit(0);
	}

	char in_buffer[MSG_BUFFER_SIZE];
	char out_buffer[MSG_BUFFER_SIZE];

//	while(1)
	{
		//get the oldest message with highest priority
		/*	if (mq_receive(qd_server,in_buffer,MSG_BUFFER_SIZE,NULL) == -1)
		{
			perror("mq_receive:");
			exit(0);

		}*/
 		mq_receive(qd_server,in_buffer,MSG_BUFFER_SIZE,NULL) ;
		printf("%s\n",in_buffer);
		printf("Server: message received\n");
		//send reply message to client
		
		if(qd_client = mq_open(in_buffer,O_WRONLY) == -1)
		{
			perror("qd_client:");
//			continue;
		}

		sprintf(out_buffer,"%ld",token_no);

		if(mq_send(qd_client,out_buffer,strlen(out_buffer),0) == -1);
		{
			perror("mq_send:\n");
//			continue;
		}

		printf("server : respose sent to the client:\n");
		token_no++;


	}


	return 0;
}
