#include"headers.h"
int main()
{
	int pid ;
	float pid;
	pid =getpid();
//	printf("PID = %d\n",pid);
	execlp("ls","ls",NULL);
	execlp("cal","cal",NULL);
//	printf("PID = %d\n",pid);
	return 0; 
}
