#include<stdio.h>
#include<unistd.h>
int main()
{
	fork();
	fork();
	fork();
	printf("HELLO\n");
	while(1);
	return 0;
}
