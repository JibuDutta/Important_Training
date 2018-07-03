#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
//	char name[20];
	struct st *next,*back;
}STUDENT;

void input(STUDENT **ptr)
{
	STUDENT *nu = (STUDENT*)malloc(sizeof(STUDENT));
	STUDENT *temp = (*ptr);
	printf("ENTER THE ROLL\n");
	scanf("%d",&(nu->roll));
	//printf("Enter the name\n");
	//scanf("%s",nu->name);

	if((*ptr) == NULL)
	{
		nu->next = NULL;
		nu->back = NULL;
		(*ptr) = nu;

	}

	else
	{
		while(temp->next)
		{
			temp = temp->next;
		}

		nu->next = NULL;
		nu->back = temp;
		temp->next = nu;

	}

//	free(nu);
}


void print(STUDENT *ptr)
{

	while(ptr)
	{
		printf("%d \n",ptr->roll);
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
	STUDENT *temp = (*ptr);
	
	while(temp && temp->roll != delete)
	{
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
		if(*ptr)
		(*ptr)->back = NULL;
		return;
	}

	temp->back->next = temp->next;
	if(temp->next)
	temp->next->back = temp->back;

}	

int main()
{
	STUDENT *head = NULL;
	char choice;
	while(1)
	{
		printf("i:INPUT\np:print\nd:delete\nq:quit\n");
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
			case 'q':return; 


		}
	}
	return 0;
}
