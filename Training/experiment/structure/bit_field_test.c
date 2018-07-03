#include<stdio.h>

struct st
	{
	char s:1;
	short int a:2;
	char b:4;
	short int c:10;
	}v;



int main()
{
	
	char q=-128;
	q=q-1;

	printf("%d\n",q);

	printf("SIZEOF THE STRUCTURE:%d\n",sizeof(struct st));
	
	return 0;
}
