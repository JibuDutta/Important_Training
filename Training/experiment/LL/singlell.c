#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *next;
}STUDENT;
void insert_at_last(STUDENT **ptr)
{
	STUDENT *nu = (STUDENT*)malloc(sizeof(STUDENT));
	STUDENT *temp = (*ptr);
	
	printf("Enter the roll 	:");
	scanf("%d",&(nu->roll));
	if((*ptr) == NULL)
	{
		nu->next  = NULL;
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

}
void print(STUDENT *ptr)
{
	
	while(ptr)
	{
		printf("%d-->",ptr->roll);
		ptr = ptr->next;
	}

	printf("\n");
}
void insert_at_first(STUDENT **ptr)
{
	STUDENT *nu = (STUDENT*)malloc(sizeof(STUDENT));
	printf("enter the roll:	");
	scanf("%d",&(nu->roll));

	if((*ptr) == NULL)
	{
		nu->next = NULL;
		(*ptr) = nu;
	}
	else
	{
		nu->next = (*ptr);
		(*ptr) = nu;
	}


}
void delete(STUDENT **ptr)
{
	if((*ptr) == NULL)
	{
		printf("Empty Node	:\n");
		return ;
	}
	int r2d;
	printf("Enter the roll to delete 	:");
	scanf("%d",&r2d);

	STUDENT *temp = (*ptr);
	STUDENT *prev = NULL;
	while(temp)
	{
		if(temp->roll == r2d)
			break;
		prev = temp;
		temp = temp->next;
	}
	if(temp == NULL)
	{
		printf("Roll not found :\n");
		return ;
	}
	if(temp == (*ptr))
	{
		(*ptr) = (*ptr)->next;
		return ;
	}
	
	prev->next = temp->next;
	
	free(temp);

}
void reverse(STUDENT **start)
{
	STUDENT *prev, *ptr, *nxt;

	prev = NULL;
	ptr = (*start);

	while(ptr)
	{
		nxt = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = nxt;
	}

	(*start) = prev;


}
int main()
{
	STUDENT *head = NULL;
	char choice;
	while(1){

		printf(" i:input at last\n j:insert at first\n ");
		printf(" d:delete\n p:print\n r:reverse\n q:quit\n");
		printf("Enter the choice\n");
		scanf(" %c",&choice);
		switch(choice)
		{
			case 'i':insert_at_last(&head);
					 break;
			case 'j':insert_at_first(&head);
					 break;
			case 'd':delete(&head);
					 break;
			case 'p':print(head);
					 break;
			case 'r':reverse(&head);
					 break;
			case 'q':exit(0);

			default:printf("Enter valid choice\n");
		}
	
	}
	
	return 0;
}
