#include<stdio.h>
//#include</*stdio.h*/>
#define MAX

#if 0
void swap(int *a,int *b)
{

		(*a)=(*a)+(*b);
		(*b)=(*a)-(*b);
		(*a)=(*a)-(*b);

}

int main()
{
		int a,b;
		printf("ENTER a and b\n");
		scanf("%d%d",&a,&b);

		swap(&a,&b);
		printf("a=%d b=%d",a,b);

		return 0;
}


#endif


#if 0
int main()
{

		int num=0;
		int rev=0;
		printf("ENTER No\n");
		scanf("%d",&num);
		int temp = num;
		while(num!=0)
		{
				rev=rev*10 + num %10;
				num=num/10;
		}

		if(rev==temp)
				printf("PAllindrome");
		else
				printf("Not  PAllindrome");

		//printf("MAX = %d\n",MAX);
		//return 0;

}

#endif
//#define x*y x+y
#define int char 

int main(void)
{	const volatile int ab;
	//int x=12,y=12,a=5;
//	int a;
//	int arr[a];

//	printf("%cn",x*y);
//	scanf("%c",&a);
//	printf("SIZE:%d",sizeof(arr));
	int *ptr;
	char *a;

//	printf("%p",sizeof(ptr));
//	printf("%p",sizeof(a));
	printf("%d");
   
	return 0;
}
