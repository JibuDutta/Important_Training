#include"headers.h"
int main()
{
	int i =0;
	
	for(i=0 ; i < 3 ; i++)
	{
		if(fork()) 
			{
				printf("%d  %d\n",getpid(), getppid());
				exit(0);
			}
	}

		/*else if(fork() == 0) {
			printf("%d  %d\n",getpid(),getppid());
		}
		else if(fork() == 0) {
			printf("%d  %d\n",getpid(),getppid());
		}*/


//		else
//			printf("Parent\n");
		
		return 0;
}
