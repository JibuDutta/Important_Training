#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf("PID = %d\n",getpid());
	getchar();
	return 0;
}
