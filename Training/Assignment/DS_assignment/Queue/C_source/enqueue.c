#include"headers.h"

extern int queue[];
extern int rear;
extern int front;

void enqueue(void)
{

	int data;	

	if(rear==MAX-1)
	{
	
	printf("THE QUEUE IS FULL\n");
	return; 
	}

	else
	{
		printf("ENTER THE DATA\n");
		scanf("%d",&data);

		rear++;
		queue[rear]=data;
		printf("DATA SUCCESSFULLY INSERTED\n");

	}


}
