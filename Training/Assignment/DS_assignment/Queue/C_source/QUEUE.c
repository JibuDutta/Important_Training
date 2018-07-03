#include<stdio.h>
#define MAX 5

int arr[MAX];
int front=-1;
int rear=-1;
int i=0;
void enqueue();
void dequeue();
void display();

int main()
{
	int ch=0;
	do
	{
		printf("\n1.Enter element\n2.Delete element\n3.Display\n4.Exit\n");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Invalid Option\n");
		}
	}
	while(ch!=4);
}

void enqueue()
{
	if(rear==MAX-1)
	{
		printf("Queue is full\n");
		return;
	}
	else
	{     
		rear++;
		printf("Enter element");
		scanf("%d",&arr[rear]);
		if(front==-1)
			front++;
	}
	return;
}

void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	else
	{
		printf("Deleted element:%d",arr[front]);
		if(front==rear)
			front=rear=-1;
		else
			front++;
	}
	return;
}

void display()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
		return;       
	}
	printf("\nElement in queue are: FRONT->");
	for(i=front;i<=rear;i++)
		printf("....%d",arr[i]);
	printf("....REAR\n");
	return;
}
