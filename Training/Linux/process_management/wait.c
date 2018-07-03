#include"headers.h"
int main(void)
{
	int pid ;
	
	pid = fork();

	if(pid == 0)
		{
			printf("child  %d	%d\n",getpid(),getppid());
			sleep(5);
			printf("child exiting\n");
		//	exit(0);
		}
	else if (pid > 0)
		{
			printf("Parent %d	%d\n",getpid(),getppid());
		//	wait(0);
		//	sleep();
			printf("Parent exiting\n");
		//	exit(0);

		}
	else
	printf("fork error\n");	
	getchar();
	return 0;
}
