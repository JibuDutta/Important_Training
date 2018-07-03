#include"headers.h"
int main(void)
{
	int pid;
	int var = 5;
	pid = vfork();
	
	if(pid > 0)
	{
		printf("Parent\n");
		printf("var = %d\n",var);
		sleep(2);
		exit(0);
	}
	else
	{
		printf("Child\n");
		var = var + 5;
		printf("var = %d\n",var);
		sleep(5);
		exit(0);
	}
	return 0;
}
