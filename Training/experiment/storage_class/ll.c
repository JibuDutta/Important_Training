#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};

/* Function to reverse the linked list */
void printReverse(struct node *head)
{
	// Base case  
	if (head == NULL)
		return;

	// print the list after head node
	printReverse(head->next);

	// After everything else is printed, print head
	printf("%d  ", head->data);
}

/*UTILITY FUNCTIONS*/
/* Push a node to linked list. Note that this function
   changes the head */
void push(struct node **head_ref, char new_data)
{
	/* allocate node */
	struct node *new_node =(struct node*) malloc(sizeof(struct node));

	/* put in the data  */
	new_node->data  = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);   

	/* move the head to pochar to the new node */
	(*head_ref) = new_node;
} 

/* Drier program to test above function*/
int main()
{
	// Let us create linked list 1->2->3->4
	struct node *head = NULL;    

while(1){
	char choice;
	int num;
	printf("i:push()\np:print()\nq:quit()\n");
	printf("Enter ur Choice\n");
	scanf(" %c\n",&choice);
	switch(choice){

		case 'i': printf("ENter value\n");
				 scanf(" %d",&num);
				 push(&head,num);
				break;
				/*
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);*/
		case 'p':printReverse(head);
				 break;
		case 'q':return ;		
	}
}	
	return 0;
}
