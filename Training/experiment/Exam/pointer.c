#include<stdio.h>

#if 0 
int main()
{
		char *ptr1="HELLO";
		char *ptr2="HELLO";

		if(ptr1==ptr2)
				printf("TRUE\n");
		else
				printf("FALSE\n");

		return 0;
}

#endif
#if 0 
int main()
{
		char *p1=NULL;
		char *p2=0;

		strcpy("A","c");
		strcpy(p2,"question");
		printf("%s",p1);
		printf("%s",p2);

		return 0;
}

#endif

#if  0
int main()
{
		char arr[10] ;  /* = "world";*/
		arr="world";
		printf("%s",arr);

		return 0;
}

#endif

#if 1
int main()
{
		char *ptr=NULL;
		while(1)
		{	
				ptr=(char*) malloc(10*sizeof(char));
		}
		return 0;
}


#endif

#if 0 
int main()
{
int a[]={0,1,2,3,4};
int *p,i=0;

for(p=a;p+i<=a+4;p++,i++)
printf("%d\n",a[i]);

return 0;
}

#endif

#if 0

int main()
{
int a=10;
int p=&a;
printf("%d",*p);
return 0;

}
#endif

#if 1 
int main()
{
//	char arr[]={0}; 	
	int a[][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	int **p=a;

	printf("%d\n",*p++);
	printf("%d\n",*++p);
	printf("%d\n",*(p+1));
	printf("%d\n",**a);
	printf("%d\n",*(*a+1));
	printf("%d\n",**(a+1));
	printf("%d\n",*(&a+1));
	printf("%d\n",*(*(a+1)));
	printf("%d\n",&p+1);
	printf("%d\n",*(*(a+2)+3));

return 0;
}


#endif
