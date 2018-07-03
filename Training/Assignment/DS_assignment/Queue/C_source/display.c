#include"headers.h"

extern int rear;
extern int front;

extern int queue[];

void display(void)
{
	int i;

	if(rear==-1)
	{

		printf("EMPTY QUEUE\n");	

	}

	printf("*********LIST OF ELEMENTS******\n");

	for(i=front+1;i<=rear;i++)
	{

		printf("%d--->>>",queue[i]);

	}



}
