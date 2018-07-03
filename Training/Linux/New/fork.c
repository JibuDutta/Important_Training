#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	if (vfork())
	{
		printf("Parent %d  %d\n",getpid(),getppid());
//		wait(NULL);
		printf("Parent Exiting\n");
		exit(0);
	}
	else
	{
		printf("Child  %d  %d\n",getpid(),getppid());
		sleep(3);
		printf("Child Exiting\n ");
		exit(0);
	}
	return 0;
}
