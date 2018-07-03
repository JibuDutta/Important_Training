#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>

void catch( int signum);

int main(void)
{
	signal(SIGINT,catch);

	printf("Heyyyyyyyyy\n");
	
	pause();


	return 0;
}

void catch( int signum)
{
	printf("Cought control\n");
	fflush(stdout);

	return ;
}

