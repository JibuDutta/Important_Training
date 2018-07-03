#include"header.h"
int main(void)
{
	int fd,count;

	char rdbuf[100];
	if(mkfifo("count",0666) == -1)
	{
		perror("Fifo:");
		return;
	}
	fd = open("count",O_RDWR);
	while(1)
	{
		sleep(3);
		bzero(rdbuf,100);
		read(fd,rdbuf,100);
		int  i = 0;

		printf("From client I am receiving: %s",rdbuf);
		count = 0;
		for(i = 0;rdbuf[i];i++)
		{
			if((rdbuf[i] >=65 &&rdbuf[i]<=90) || (rdbuf[i] >=97 && rdbuf[i]<=122))
			count++;			
		}
		write(fd,&count,4);
	
	}
	close(fd);

	return 0;
}
