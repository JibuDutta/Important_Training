#include"header.h"
int main(void)
{
	int fd[2];
	int size = 0;
	pipe(fd);
	
	if( pipe(fd)== -1)
	{
		perror("Pipe Error\n");
		return ;
	}

	while(1){
		if(write(fd[1],"A",1) == 1)
		{	
			size++;
			printf("SIZE:%d\n",size);
		}
	//	printf("SIZE:%d\n",size);
		//else
		//	break;
	}

//	printf("SIZE:%d\n",size);

	

	return 0;
}
