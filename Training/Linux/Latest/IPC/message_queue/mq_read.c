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

int main()
{
	key_t key;

	int msg_id;

	key = ftok("file",5);
	msg_id = msgget(key,IPC_CREAT | 0660);


	msgrcv(msg_id,&message,sizeof(message)+1,message.mtype,0);

	printf("message received : %s\n",message.msg_text);

	msgctl(msg_id,IPC_RMID,0);
	return 0;
}
	

