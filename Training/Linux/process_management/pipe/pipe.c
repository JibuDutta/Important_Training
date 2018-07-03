#include"header.h"

int val = 0; 

int main(void)
{
	int fd[2];
	pipe(fd);


	if(fork())
	{
		printf("ENTER A VALUE \n");
		scanf("%d",&val);
	
		write(fd[1] , &val,4);

		printf("The Value is Modified to = %d\n",val);

	}
	else
	{
		read(fd[0], &val , 4);

		printf("The Value is = %d\n ",val);
	}


	return 0;
}
