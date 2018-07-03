#include"headers.h"
extern queue[];
extern int rear;
extern int front;

void dequeue(void)
{

	if((rear==-1)||(front==MAX-1)||(front==rear))
	{

		printf("QUEUE IS EMPTY\n");

	}

	else
	{
		front++;
		printf("DELETED DATA IS %d\n",queue[front]);
	}	


}

