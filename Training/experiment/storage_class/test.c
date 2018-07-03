#include<stdio.h>

#if 0 
const int i=100;

int main()
{
	int *ptr=&i;
	(*ptr)=15;
	//i=15;
	printf("%d\n",i);
	return;
}

#endif

#if 0 

int main()
{

	//	const int i=100;
	//	int *ptr=&i;
	const int i;
	i= 10;
	printf ("%d\n",i);
	i= 17;


	//	*ptr=15;
	//i=100;
	printf("%d\n",i);
	return 0;
}

#endif

#if 0
int f()
{
	printf("fake\n");
}
main()
{
	//extern int f();
	f();
	int f()
	{
		printf("Fun");
	}
	//	printf("%d",printf("%d",printf("%c","Hello")));
	f();
}
#endif
#if 0 
register int a=10;
main()
{
	//int a=20;
	{
		//extern int a;
		printf("%d\n",a);
	}
}
#endif


#if 1 

int a;
int b=12;
extern int c;
static int d;
static int e=19;
const int x=26;

int main()
{

	int f=10;
	static int g;
	static int h=22;
	const int i=33;
	const int j;
	register int s;

	return 0;

}

#endif
