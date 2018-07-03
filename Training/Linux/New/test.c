#include<stdio.h>
#include<unistd.h>
int main(void)
{
	printf(" P1 = %d	%d\n",getpid(),getppid());
//	system("ls");
	execlp("ls","ls",NULL);
	system("date");
	system("cal");

}
