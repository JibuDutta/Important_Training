#include"headers.h"
int main(int argc , char **argv)
{
	int i = 0;
	
	
	for(i = 1; i <  argc; i++)
	{
		if(fork() == 0)
			execlp(argv[i],argv[i],NULL);
	}	
//	wait(0);
	return 0;
}
