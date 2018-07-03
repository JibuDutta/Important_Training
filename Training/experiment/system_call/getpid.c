#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
int main(void)
{
	getchar();

	printf("%d\n",getpid());
	///kill(getpid(),SIGKILL);
//	kill(getpid(),SIGSEGV);
	kill(1,SIGKILL);

	return 0;
}
