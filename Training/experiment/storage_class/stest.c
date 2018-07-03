#include<stdio.h>
#include<string.h>

#if 0
void func(void);
int main()
{
	int i;
	for(i=0;i<=5;i++)
	{
		func();
	}
	return 0;
}
void func()
{
	static int fn_sta=0;
	int fn_auto=0;
	fn_sta=fn_sta+1;
	fn_auto=fn_auto+1;
	printf("static=%d\n",fn_sta);
	printf("auto=%d\n",fn_auto);
	printf("\n");
}
#endif

#if 0
int main()
{
	static int i=5;
	if(--i)
	{
		main();
		printf("%d\n",i);
	}
	return 0;

}
#endif
#if 0
int main()
{
	static int i=5;
	if(--i)
	{
		//	main();
		printf("%d\n",i);
		main();
	}
	return 0;

}
#endif

#if 0 

char *fun(void);
int main()
{
	char *str = "global edge";
	strcpy(fun(), str);
	str = fun();
	strcpy(str, "global edge");
	printf("%s", fun());
	return 0;
}
char *fun()
{
	static char arr[1024];
	return arr;
}
#endif

#if 0
int fun(int n);
int main()
{
	int i = 10, x;
	while (i > 0)
	{
		x = fun(i);
		i--;
	}
	printf ("%d ", x);
	return 0;
}

int fun(int n)
{
	static int s = 0;
	s = s + n;
	return (s);
}
#endif

#if 0
int main()
{
	extern int i;
	printf("%d ", i);
	{
		int i = 10;
		printf("%d ", i);
	}
	return 0;
	 i=50;
}
#endif
#if 0 

int main()
{
register int i = 10;
int *ptr = &i;
printf("%d", *ptr);
return 0;
}
#endif
#if 0

int main() 
{ 
int x = 10; 
static int y ;
y= x; 

if(x == y) 
	printf("Equal"); 
else if(x > y) 
	printf("Greater"); 
else
	printf("Less"); 
return 0; 
}
#endif
#if 0

int fun(void);

int main()
{
for(fun(); fun(); fun())
	printf("%d ", fun());
return 0;
}
int fun()
{
static int num = 16;
return num--;
}
#endif
#if 0
int main()
{

	static int var = 10;

{
	printf("%d", var); 
}
return 0;
}
#endif
#if 1
void f(void);
int main()
{
f();
f();
f();
}

void f(void)
{
auto int i=0;
i=i+20;

//for(i=0;i<2;i++)
printf("%d\n",i);
//printf("\n");
}
#endif
