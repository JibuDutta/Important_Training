#include"header.h"
int main(void)
{
	int fd;
	char rdbuf[100];
	
/*	if(mkfifo("fifo1",0660)==-1)
	{
		perror("Fifo");
		return ;
	}
*/	
	fd = open("fifo1",O_RDWR);
	while(1)
	{
		printf("Waiting . . .. ");
		read(fd,rdbuf,100);
		printf("The Message is :%s",rdbuf);
	
	}
	close(fd);

	return 0;
}
