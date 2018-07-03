#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;//////structure member
	struct student *next;//self refernce
}STUDENT;

void insert_at_end ( STUDENT **ptr);
void insert_at_beginning ( STUDENT **ptr);
void insert_at_position ( STUDENT **ptr);
void insert_before_position ( STUDENT **ptr);
void print ( STUDENT *ptr);

int main(void)
{

	STUDENT *head=NULL;////head pointer
	int choice;
	while(1)
	{
		printf("1:insert at beginning\n2:insert at end\n3:insert_at_position\n");
		printf("4:insert before a given position\n");
		printf("5:print\n6:quit\n");
		printf("ENTER CHOICE\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert_at_beginning ( &head );////passing address of the head pointer
					break;
	
			case 2:insert_at_end ( &head );
					break;
	
			case 3:insert_at_position ( &head );
					break;

			case 4:insert_before_position( &head );
					break;
			case 5:print ( head);
					break;
			case 6:return;
			default:printf("INVALID CHOICE\n");
		}
	}
	
}
void insert_at_end ( STUDENT **ptr)
{
	STUDENT *nu;
	STUDENT *temp=(*ptr);
	nu = calloc(1,sizeof(STUDENT));///dynamacally allocated memory
	
	printf("ENTER THE ROLLNO\n");
	scanf("%d",&(nu->roll));///get the data
	
	if((*ptr)==NULL)
	{
		nu->next=NULL;///for the first node
		(*ptr)=nu;
	}
	
	else
	{
		while(temp->next)
		{
			temp=temp->next;///traverse
		}	
	
	
		nu->next=temp->next;//add at last
		temp->next=nu;
	}
	

}

void insert_at_beginning(STUDENT **ptr)
{
	STUDENT *nu;
	nu = (STUDENT*) malloc(sizeof(STUDENT));///dynamacally allocated memory
	
	printf("ENTER THE ROLLNO\n");
	scanf("%d",&(nu->roll));///get the value
	
	if((*ptr)==NULL)
	{
		nu->next = NULL;////for the first node
		(*ptr) = nu;
	}
	
	else
	{
		nu->next = (*ptr);///add at the beginning
		(*ptr) = nu;

	}

	
}

void insert_at_position (STUDENT **ptr)
{
	int position;
	int count=0;
	
	STUDENT *temp = (*ptr);
	STUDENT *nu = (STUDENT *) malloc (sizeof(STUDENT));
	
	
	
	printf("ENTER THE POSITION\n");///get the position
	scanf("%d",&position);
	
	printf("ENTER THE ROLLNO\n");
	scanf("%d",&(nu->roll));///get the value
	

	if((*ptr)!=NULL)	
	{
		if(position == 1)///if node is there and we have to add 1st position
		{
			nu->next = (*ptr);
			(*ptr)=nu;
		}
		
		else	
		{
			while ( (temp) && (count != position - 2))
				{
					count++;
					temp=temp->next;//traversing to find the position
				}
		
				if ( temp == NULL)
				{
					printf("INSERT VALID POSITION\n");//if position is not valid
					return;
				}
		
		nu->next = temp->next;///if node is there and we have to add other than 1st position
		temp->next = nu;
		}
	}
	
	else
	{
		if(position == 1)
		{
			nu->next=NULL; ///if list is empty 
			(*ptr)=nu;
		}
		else
		{
			printf("INSERT VALID POSITION\n");///if invalid position
			return;
		}
	}
	

}

void insert_before_position ( STUDENT **ptr)
{
	int position=0;
	int count=0;
	
	STUDENT *nu = (STUDENT *) malloc (sizeof (STUDENT ));
	STUDENT *temp=(*ptr);

	printf("ENTER THE POSITION\n");///get the position
	scanf("%d",&position);
	
	printf("ENTER THE ROLLNO\n");
	scanf("%d",&(nu->roll));///get the value

	if(((*ptr) == NULL) && (position == 2))
	{
		nu->next = NULL;
		(*ptr) = nu;	
	}
	
	else if(((*ptr) == NULL) && (position !=2))
		{
		printf("INSERT VALID POSTION\n");
		return;
		}
	
	else{
		
			if(position == 2)
			{
				nu->next = (*ptr);
				(*ptr) = nu;			
			}
	
			else
			{
			while((temp) && (count != position-3))
				{
					count++;
					temp=temp->next;
				}
				if(temp==NULL)
				{
					printf("GIVE PROPER POSITION\n");
					return;
				}
				nu->next=temp->next;
				temp->next=nu;
			}
	
		}
	


}
void print(STUDENT *ptr)
{
	printf("------>>>LIST<<<<------\n");
	while(ptr)
	{
		printf("%d---->",ptr->roll);////print the data
		ptr=ptr->next;///for the next data
	}
	printf("\n");
}

