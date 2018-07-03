#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main( void )
{
	int *p;
	int count = 0;
	while( 1 )	{
		p = malloc( 1024*1024);
//comment the below two lines and run the program 
//check also by not commentng
//	*p = 100;
//		printf("*p = %d\n", *p);

		if(p == 0 )	{
		perror("malloc");
		printf("%d\n", getpid());
		getchar();
		return;	
	}
		count++;
		printf("count = %d\n", count);
	}
	return 0;
}
