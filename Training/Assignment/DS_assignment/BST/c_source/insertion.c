#include"headers.h"

NODE *insert( int **root,int data)
{
	if((*root) == NULL)
		{
			NODE *nu = (NODE *) malloc (sizeof(NODE));
			
			nu->info = data;
			nu->left = NULL;
			nu->right = NULL;
			(*root) = nu;

		}

	else if (data < ((*root)->info))
		{
			insert ( ( & (*root)->left),data );

		}
	else if (data > ((*root)->info))
		{
			insert ( ( & (*root)->right),data );
			
		}
	else
		printf("DUPLICATES DATA ARE NOT ALLOWED\n");
}
