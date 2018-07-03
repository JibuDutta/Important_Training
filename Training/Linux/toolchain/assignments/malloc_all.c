#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#define MAX -1
int main( void )
{
//	int *p = ( int * )malloc ( sizeof(int) );
	int *p = ( int * )malloc (0); 
	//int *i = ( int * )malloc ( sizeof(int) );
	printf("pid = %d\n", getpid());


	printf("index = %d\t p[MAX] = %d\n", MAX, p[MAX] );
	getchar();
return 0;
}
