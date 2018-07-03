#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *insert_frent(struct node *);
struct node *insert_end(struct node *);
void display(struct node *);

int main(void)
{
	struct node *head = NULL;
	int choice;
	while(1){

		printf("\n1. to insert frent\n");
		printf("2. to insert end\n");
		printf("3. to display\n");
		printf("4. to exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);

		switch(choice){
			case 1: head=insert_frent(head);
					break;
			case 2: head=insert_end(head);
					break;
			case 3: display(head);
					break;
			case 4: exit(0);
					break;
			default: printf("your choice is wrong! Enter once again\n");
		}
	}
}

struct node *insert_frent(struct node *head)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));

	printf("Enter the Element \n");
	scanf("%d",&p->data);
	p->link=NULL;
	if(head==NULL)
		head=p;
	else{
		p->link=head;
		head=p;
	}
	return head;
}

struct node *insert_end(struct node *head)
{
	struct node *p;
	struct node *temp;
	temp=head;
	p=(struct node *)malloc(sizeof(struct node));

	printf("Enter the Element \n");
	scanf("%d",&p->data);

	p->link=NULL;
	if(head==NULL)
		head=p;
	else{
		while(temp != NULL){
			temp=temp->link;
		}
		temp->link=p;
	}
	return head;
}

void display(struct node *head)
{
	if(head ==NULL)
		printf("No elements are there to display\n");
	else
		while(head!=NULL && printf("%d\t",head->data) && (head = head->link));
}
