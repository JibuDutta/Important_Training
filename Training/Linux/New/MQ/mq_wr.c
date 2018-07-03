#include"header.h"
struct msgbuf 
{
	long mtype;
	char mtext[20];
};

int main(int argc,char **argv)
{
	int id;

	struct msgbuf wr_buf;

	id = msgget(1,0660);

	if(id == -1)
	{
		perror("msgget:\n");
	}
	else
		printf("Create Success\n");

	strcpy(wr_buf.mtext,argv[2]);

	wr_buf.mtype = atoi(argv[1]);

	if (msgsnd(id,&wr_buf,strlen(wr_buf.mtext)+1,0) == -1)
	{
		perror("msgsnd:");
	}
	else
		printf("Success\n");

	return 0;	
}
