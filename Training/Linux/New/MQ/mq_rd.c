#include"header.h"
struct msgbuf 
{
	long mtype;
	char mtext[20];
};

int main(void)
{
	int id;
	
	struct msgbuf buf;

	id = msgget(1, IPC_CREAT );
	if(id == -1)
	{
		perror("msgget:\n");
	}
	else
		printf("Create Success\n");

	msgrcv(id , &buf, 20, 10, 0 );

	printf("%d	%s\n",getpid(),buf.mtext);

	return 0;	
}
