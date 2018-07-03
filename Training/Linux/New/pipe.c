#include"header.h"
int v = 0;

int main(void)
{
	
	int fd[2];
	pipe(fd);
	char buf[20 ];
	if (fork())
	{
		close(fd[0]);
		while(1){
			printf("Enter the data to send\n");
			scanf("%s",buf);
			write( fd[1], buf, strlen(buf)+1 );
			sleep(1);
		}
		//printf("v in Parent = %d\n",v);
		exit(0);
	}
	else 
	{
		close(fd[1]);
		while(1)	{
		//	printf("In Child v = %d\n",v);
		//sleep(5);
			read(fd[0],buf,sizeof(buf));
			printf("In Child v = %s\n",buf);
		}

	}
	return 0;
}
