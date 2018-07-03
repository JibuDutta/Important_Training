//#include"headers.h"
#include<stdio.h>
#include<stdlib.h>
typedef struct bst
{
	int info;
	struct bst *left;
	struct bst *right;

}NODE;


void insert( NODE **root,int data);
void inorder( NODE *root);

void postorder(NODE *root);
void preorder(NODE *root);

int main()
{
	char choice;
	int data;
	NODE *bst=NULL;

	while(1)
	{
		printf("a:insert\ni:inorder\np:preorder\nc:postorder\nq:quit\n");
		printf("ENTER YOUR CHOICE\n");
		scanf(" %c",&choice);
		switch(choice)
			{
				case 'a':printf("ENTER THE NODE\n");
						scanf("%d",&data);

						insert( &bst, data);
						break;

				case 'i':inorder(bst);
						break;

				case 'p':preorder(bst);
						break;

				case 'c':postorder(bst);
						break;

				case 'q':return ;

				default:printf("ENTER VALID CHOICE\n");
			}
	
	}

	return 0;
}


void insert( NODE **root,int data)
{
	NODE *nu;

    if((*root) == NULL)
        {
            nu =(NODE*) malloc (sizeof(NODE));

            nu->info = data;
            nu->left = NULL;
            nu->right = NULL;
            (*root) = nu;

        }

    else if (data < ((*root)->info))
        {
            insert ((&(*root)->left),data );

        }
    else if (data > ((*root)->info))
        {
            insert (( & (*root)->right),data );

        }
    else
        printf("DUPLICATES DATA ARE NOT ALLOWED\n");
}
      
void inorder(NODE *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d--",root->info);
		inorder(root->right);
	}


}
void preorder(NODE *root)
{
	if(root)
	{
		printf("%d--",root->info);
		preorder(root->left);
		preorder(root->right);
	}


}
void postorder(NODE *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d--",root->info);
	}


}
