#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid ;
//	int var = 5;

	pid = fork();
	
//	while(var > 0) {

			int var = 5;
		if(pid == 0) {
			printf("child  %d %d\n",getpid(),getppid());
		//	float var = 5;
			printf("child  %d \n",var);
			//int var = 5;
//			var--;
//			__fpurge(stdin);	
//			getchar();
			sleep(5);	
		}
		else {
//			wait(NULL);
			printf("parent %d  %d\n",getpid(),getppid());
		//	float var = 5;
			printf("PARENT  %f \n",var);
//			var--;
//			sleep(2);
		}
//	}
		getchar();
	return 0;
}
