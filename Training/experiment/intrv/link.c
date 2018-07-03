#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	char name[20];
	struct st *next;
}STUDENT;

void input(STUDENT **ptr)
{
	STUDENT *nu = (STUDENT*)malloc(sizeof(STUDENT));
	STUDENT *temp = (*ptr);
	printf("ENTER THE ROLL\n");
	scanf("%d",&(nu->roll));
	printf("Enter the name\n");
	scanf("%s",nu->name);

	if((*ptr) == NULL)
	{
		nu->next = NULL;
		(*ptr) = nu;

	}

	else
	{
		while(temp->next)
		{
			temp = temp->next;
		}

		nu->next = NULL;
		temp->next = nu;

	}

//	free(nu);
}


void print(STUDENT *ptr)
{

	while(ptr)
	{
		printf("%d 	%s\n",ptr->roll,ptr->name);
		ptr = ptr->next;
	}

}
void delete( STUDENT **ptr)
{

	if((*ptr) == NULL)
	{
		printf("Empty List\n");
		return;
	}

	int delete;
	printf("Enter the roll to delete\n");
	scanf("%d",&delete);
	STUDENT *prev;
	STUDENT *temp = (*ptr);
	while(temp)
	{
		if(temp->roll == delete)
		break;
		prev = temp;
		temp = temp->next;
	
	}

	
	if(temp == NULL)
	{
		printf("Not in the list\n");
		return;
	}
	if(temp ==(*ptr))
	{
		*ptr = (*ptr)->next;
		return;
	}

	prev->next = temp->next;



}	


void reverse(STUDENT **start)
{
	STUDENT *x,*y,*z;
	x=NULL;
	y=(*start);
	while(y!=NULL)
	{
		z=y->next;
		y->next = x;
		x=y;
		y=z;
	}
	(*start) = x;

}

int main()
{
	STUDENT *head = NULL;
	char choice;
	while(1)
	{
		printf("i:INPUT\np:print\nd:delete\nr:reverse\nq:quit\n");
		printf("Enter choice\n");
		scanf(" %c",&choice);
		switch(choice)
		{
			case 'i':input(&head);
					 break;
			case 'p':print(head);
					 break;
			case 'd':delete(&head);
					 break;
			case 'r':reverse(&head);
					 break;
			case 'q':return; 


		}
	}
	return 0;
}
