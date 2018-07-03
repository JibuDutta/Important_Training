#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

struct msg_buffer
{
	long mtype;
	char msg_text[20];
}message;

int main(int argc,char** argv)
{
	key_t key;

	int msg_id;

	key = ftok("file",5);
	msg_id = msgget(key,IPC_CREAT | 0660);

	strcpy(message.msg_text,argv[2]);
	message.mtype = atoi(argv[1]);

	msgsnd(msg_id,&message,sizeof(message)+1,0);

	printf("message sent : %s\n",message.msg_text);

	return 0;
}
	

