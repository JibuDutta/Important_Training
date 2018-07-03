#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()

{
	int pid;
	
	pid = fork();
	
	if(pid > 0)	{
		printf("Parent process ID %d	%d\n",getpid(),getppid());
		sleep(6);
		printf("Parent exiting\n");	
	}
	
	else if(pid == 0) {

		printf("Child process  ID %d	%d\n",getpid(),getppid());
		sleep(3);
		printf("child exiting\n");
//		printf("Child process  ID %d	%d\n",getpid(),getppid());
	}	

	else
		printf("FORK ERROR\n");

//	getchar();
	return 0;
}
