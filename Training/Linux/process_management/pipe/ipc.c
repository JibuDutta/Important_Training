#include"header.h"
int v = 0; 
int main(void)
{
	int fd[2];
	pipe(fd);
	
	if(fork())
	{
		close(fd[0]);
		printf("Enter the Value:\n");
		scanf("%d",&v);

		write(fd[1],&v,4);

		printf("The Value in the Parent: %d\n",v);

		exit(0);
	}
	else
	{
		close(fd[1]);
		printf("In child: v = %d\n",v);
		sleep(5);

		read(fd[0],&v,4);

		printf("In child: v = %d\n",v);
		exit(0);
	}

	return 0;

}
