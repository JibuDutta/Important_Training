#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int cnt=0;
while(1){
	int *ptr = (int *) malloc (1024 * 1024);

	if(ptr == NULL)
	{
		perror("malloc");
		exit(0);
	}
	
	printf("%d\n",cnt++);
	printf("%p\n",ptr);
}
	//getchar();
	
	
//	free(ptr);
	

	return 0;
}
