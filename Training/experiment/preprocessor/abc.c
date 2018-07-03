#include<stdio.h>
#if 0
#define INTEGER int
#define INTPTR int *
typedef int * INTPTR;
int main(void)
{
	INTEGER x,y;
	INTPTR p,q;
	x=11;
	p=&x;
	q=&x;
	*q=*p;
	printf("%d %d\n",*p,*q);

	return 0;
}
 #endif

#if 0
#define A(a) a
#define B(b) "b"
#define C(c) #c
#define D(x,y) x##y


int main()
{
	
		printf("%d\n",A(123));
		printf("%s\n",B("Jiban"));
		printf("%s\n",C(Jiban));
		printf("%d\n",D(100,45));
		
		return 0;
}


#define PRINT(var , fmt) printf("THE VALUE OF" #var "=" #fmt"\n" ,var)

int main()
{
	int a = 123;
	float b =12.3;
	char c ='A';

	PRINT(a,%d);
	PRINT(b,%f);
	PRINT(c,%c);

	return 0;
}

#endif

