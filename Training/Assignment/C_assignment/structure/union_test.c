#include<stdio.h>

union sample
{
	int a:5;
	int b:10;
	int c:5;
	int d:21;
	int e;
};




int main()
{
	union sample v;
	
	printf("ENTER A VALUE FOR LAST ELEMENT\n");
	scanf("%d",&(v.e));
	
	printf("THE VALUE OF A:%d\n\n",v.a);
	printf("THE VALUE OF B:%d\n\n",v.b);
	printf("THE VALUE OF C:%d\n\n",v.c);
	printf("THE VALUE OF D:%d\n\n",v.d);
	printf("THE VALUE OF E:%d\n\n",v.e);

	return 0;
}

