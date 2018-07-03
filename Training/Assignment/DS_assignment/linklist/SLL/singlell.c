#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	struct student *next;
}STUDENT;
void input(STUDENT **ptr);
void print(STUDENT *ptr);
void delete(STUDENT **ptr);
void reverse (STUDENT **start);



void printReverse(STUDENT  *head)
{
	// Base case  
	if (head == NULL)
		return;

	// print the list after head node
	printReverse(head->next);

	// After everything else is printed, print head
	printf("%d  ", head->roll);
}


int main()
{
	STUDENT *head=NULL;
	while(1)
	{
		char choice;
		printf(" i:input\n p:print\n d:delete\n r:reverse\n s:printreverse\nq:quit\n");
		printf("enter the choice\n");
		scanf(" %c",&choice);
		switch(choice)
		{
			case'i':input(&head);
					break;
			case'p':print(head);
					break;
			case'd':delete(&head);
					break;
			case'r':reverse(&head);
					break;
			case's':printReverse(head);
					break;		
			case'q':return 0;
			default:printf("invalid choice\n");
		}
	}
	return 0;
}

void input(STUDENT **ptr)
{
	STUDENT *nu;
	nu=calloc(1,sizeof(STUDENT));
	printf("enter the roll no\n");
	scanf("%d",&(nu->roll));
	if((*ptr)==NULL)
	{
		nu->next=NULL;
		(*ptr)=nu;
	}
	else
	{
		nu->next=(*ptr);
		(*ptr)=nu;
	}

}

void print(STUDENT *ptr)
{
	printf(">>>>>LIST<<<<<\n");
	while(ptr)
	{
		printf("%d--->",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}

/*void delete(STUDENT **ptr)
  {
  STUDENT *temp;
  STUDENT *nu=(*ptr);
  temp=(*ptr);
  if((*ptr)==NULL)
  {
  printf("EMPTY LIST\n");
  return;
  }
  else
  {
  while(temp)
  {

  (*ptr)=(nu->next);
  temp=temp->next;
  }
  free(temp);

  }
  }*/
void delete(STUDENT **ptr)
{
	int roll2del;
	STUDENT *temp,*prev;
//	STUDENT *nu=(*ptr);
	temp=(*ptr);
	if((*ptr)==NULL)
	{
		printf("EMPTY LIST\n");
		return;
	}

	printf("enter the roll no you want to delete\n");
	scanf("%d",&roll2del);

	while(temp)
	{
		if(temp->roll==roll2del)
			break;
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("Roll NO is not in the list\n");
		return;
	}
	else if(temp==(*ptr))
	{
		(*ptr)=(*ptr)->next;
	}
	else
		prev->next=temp->next;
	free(temp);



}
void reverse (STUDENT **start)
{

//	STUDENT  *prev, *ptr, *link;
	STUDENT  *x, *y, *z;
//	prev = NULL;
//	ptr = (*start);

//	while(ptr !=NULL)
//	{
//		link = ptr->next;
//		ptr->next = prev;
///		prev = ptr;
//		ptr = link;
//
//	}

//	(*start) = prev ;
	z = NULL;
	y = (*start);
	while( y != NULL)
	{
		x = y->next;
		y->next = z;
		z = y;
		y = x;
	}
	(*start) = z;


}



