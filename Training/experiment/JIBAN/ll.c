#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student	{

	int roll;
	struct student *next;
}STUDENT;
void insert(STUDENT **ptr)
{
	int roll ;
	STUDENT *temp = (*ptr);

	STUDENT *nu = (STUDENT*)calloc(1,sizeof(STUDENT));
	if(nu == NULL)	{
		perror("Calloc Allocation failed");
		exit(0);
	}
	printf("Enter the roll no:");
	scanf(" %d",&(nu->roll));

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
		
		nu->next = temp->next;
		temp->next = nu;
	}
	
		//	nu->next = (*ptr);
		//	(*ptr) = nu;	


}
void Display(STUDENT *ptr)
{
	while(ptr)
	{
		printf("%d-->",ptr->roll);
		ptr = ptr->next;
	}
}


void Delete(STUDENT **ptr)
{
	int roll2del;

	if((*ptr) == NULL) {
		printf("Empty List\n");
		return ;
	}
	
	printf("Enter the Number to delete:");
	scanf("%d",&roll2del);

	STUDENT *temp = (*ptr);
	STUDENT *prev = NULL;

	while(temp)
	{
		if(temp->roll == roll2del)
			break;
		prev = temp;
		temp = temp->next;
	}

	if(temp == NULL){
		printf("Not in List\n");
		return;
	}

	else if(temp == (*ptr))
			(*ptr) = (*ptr)->next;
	else
		prev->next = temp->next;

}

int main()
{
	system("clear");	
	STUDENT *head = NULL;
	int value;
	while(1)
	{
		printf(" 1: Insert\n 2: Display\n 3: Delete\n 4: exit\n");
		scanf("%d",&value);
		switch(value)
		{
			case 1:insert(&head);
				 	 break;
			case 2:Display(head);
		   			 break;
			case 3: Delete(&head);
					 break;
			case 4:exit(0);
			default:printf("Invalid Choice\n");		   
		
		}
	}
	return 0;
}
