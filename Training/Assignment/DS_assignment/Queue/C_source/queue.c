#include"headers.h"

int queue[MAX];
int rear=-1;
int front=-1;


int main()
{

	char choice;

	while(1){
	
	printf("\nE:ENQUEUE\nD:DEQUEUE\nP:DISPLAY\nQ:QUIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf(" %c",&choice);
	
		switch(choice)
				
			{
			case 'e':
			case 'E':enqueue();
					break;
			
			case 'd':
			case 'D':dequeue();
					break;

			case 'p':
			case 'P':display();
					break;
			
			case 'q':
			case 'Q':return;

			default:printf("\n INVALID CHOICE \n");
			}
	}

return 0;
}
