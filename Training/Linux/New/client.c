#include"header.h"
int main(void)
{
	int fd,count;

	char wrbuf[100];

	/*	
	if(mkfifo("count",0666) == -1)
	{
		perror("Fifo:");
		return;
	}
 */
	fd = open("count",O_RDWR);
	while(1)
	{
		printf("Enter your msg:\n");
		fgets(wrbuf,100,stdin);
		write(fd,wrbuf,strlen(wrbuf)+1);
		sleep(3);
		read(fd,&count,4);
		printf("count of alpha: %d\n",count);

	
	}
	close(fd);

	return 0;
}
