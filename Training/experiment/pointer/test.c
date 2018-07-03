#include<stdio.h>
#if 0 

int main()
{
		int a[3][4]={11,22,33,44,55,66,77,88,99,111,222,333};


		//char *ptr=(char*)&a;

		printf("%u\n",a);
		//printf("%u\n",a);
		//printf("%u\n",a+1);
		printf("%u\n",*(a)+1);
		printf("%u\n",**(a+1));

		return 0;

}
#endif
#if 0 
void func(char *s)
  {
  printf("%s",s);
  return;
  }
int main()
{

//		printf("%s","GOAL");
//		printf("%u","GOAL");
//		int n1 = printf("%s","GOAL");
//		int n2 = printf("%u","GOAL");

//		printf("%d 		%d",n1,n2);

		func("GLOBAL");
		/*int x=306;

		int *p=&x;

		char *a;
		a=p;

		printf("%d",*a);
*/
		return 0;
}
#endif


#if 0 
int main()
{
		int num;
		char *str = "Global edge";

	//	printf ("0x%08x\n","Global edge");

		//	printf ("%s\n","Global edge");

			num = printf ("%s\n","Global edge");

	//	num = printf ("%s","Globaledge");

		printf ("%d\n", num);

		return 0;

}

#endif


#if 0 

int main ()

{

		char amsg[] = "Global";

		char *pmsg = "edge";



		printf ("%p\n",amsg);

		printf ("%p\n",pmsg);

		printf ("%s\n",amsg);

		printf ("%p\n",*pmsg);

		printf ("%s\n", *pmsg);



		return 0;

}


#endif

#if 0 

int main ()

{

		char msg[] = "hi";

		char dmsg[3];

		//	dmsg = msg;

		char *pmsg = "Hello";

		char *pdmsg;

		pdmsg = pmsg;



		printf ("%p\n", pmsg);

		printf ("%p\n", pdmsg);

		printf ("%s\n", pmsg);

		printf ("%p\n", msg);



		return 0;

}



#endif

#if 0 

char *n;


int main ()

{

		char *p = "Higlobal";

		char s[8] = "Hello";

		//	p = &s[0];

		printf ("%p\n",p);
		printf ("%p\n",&s);
	//		*p = 'p';
		printf ("%d\n",*p);
			p = p + 8;

			printf ("%p\n",p);
//		 *p = 0;
//		 printf ("%p\n",p);
		 p = n;
//		 *p = n;
//		 printf ("%s\n", s[0]);



		return 0;

}


#endif
#if 0
int main()
{

		int a = 0,b = 0;
		a = (b = 75) + b;
		printf("%d %d\n", a , b);
		int x = 0x80;
		char i = 255;


		printf("%d  %d \n",12345,i-255);

		double p=28.982736;
		printf("%lf\n",p);


		printf("%d",x<<2);
		return 0;
}
#endif


#if	0 

int main()

{

		int *p=10; 

		p++;

		printf ("p = %d\n", p);

		return 0;
}

#endif

#if 0


int main ()

{

		char *a[4] = {"global","edge","soft","limited"};

		printf ("1= %p\n",*(a+1));
		printf ("1= %c\n",**(a+1));

		printf ("2 = %c\n",**a);

		printf ("3 = %p\n",a+1);

		return 0;

}
#endif

#if 0

int main ()

{

		int *p ;

		//	p = 100;

		*p = 19;

		printf ("%d\n", *p);

		return 0;

}
#endif


#if 0

int main()

{

		char *p="GLOBALEDGE";

		int arr[] = {10, 20, 30, 40, 50, 60};

		int *ptr1 = arr;

		char *s = NULL;

		int *ptr2 = arr + 5;

		printf("Number of elements between two pointer are: %d.\n",(ptr2 - ptr1));
		printf("Number of bytes between two pointers are: %d\n",(char*)ptr2 - (char*) ptr1);

		printf("%d\n", sizeof(s));

		printf("%c    \n",*&*&*p);

		return 0;

}




#endif

#if 0

int main()

{

		int arr[] = {1, 2, 3, 4, 5};

		int *p = arr;

		p = ++p;

		p += 2;

		printf("%d", *p);

		return 0;

}

#endif

#if 0 


int main()

{

		int var;  /*Suppose address of var is 2000 */


		int	*ptr = &var;

	//	void *ptr;
	//	ptr = (int*)var;

		*ptr = 5;

		printf("var=%d and *ptr=%d",var,*ptr);


		return 0;

}

#endif

#if 0
int main()


{
		int a[4] = {1,2};

		printf("%p\n", a);
		printf("%d\n", a[0]);
		printf("%p\n", &a);

	//	return 0;


		int i;

		int arr[] = {10, 20 ,30, 40};

		int arr_size = sizeof(arr) / sizeof(arr[0]);

		for (i = 0; i < arr_size; i++)

				printf("%d ", arr[i]);

		return 0;



}

#endif

#if 0
void f()
{
		printf("HELLO\n");
}
int main()
{
	//	int main=3;
	//	printf("%s\n",main());

		int x = 65, *p = &x;

		  void *q=p;

		  char *r=q;

		  printf("%c",*r);

		  return 0;
		 

		
		return 0;
}

#endif


#if 0

void swap(int m, int n)

{

		int x = m;

		m = n;

		n = x;

}

main()

{

		int x=5, y=3;

		swap(x,y);

		printf("%d %d", x, y);

}

#endif
#if 0 
int main()


{ 

		int x = 1;

		switch(x) 

		{

				default: printf("Hello");

				case 1: printf("hi"); break;

		}

}

#endif 
#if 0 

main()

{ 

		int a[] = {1,2}, *p = a;



		printf("%d", p[1]); 

}

#endif

#if 0 
int main ()

{

		char a[15] = "GlobalEdge";

		a[3] = 'p';

		printf ("%s\n",a);

		return 0;

}

#endif


#if 0 
int main ()

{

		char *a = "GlobalEdge";

		*(a+3) = 'p';

		printf ("%s\n",a);

		return 0;

}
#endif


#if 0 
int main ()

{

		char s[] = "globaledge";

		printf ("%d\n",sizeof(s));

		return 0;

}
#endif


#if 0 
int main ()

{

		int a = 5;

		if (a=5){

				while(a=5)

						break;

				printf ("hi\n");

		}

		printf ("hello\n");

		return 0;

}

#endif

#if 0 
int main ()

{

		int i = 10;

		switch (i)

		{

				int i = 20;

				case 10 : printf ("%d\n",i);

						  break;

		}

		return 0;

}

#endif

#if 0

int main ()

{

		int i = 10;

		switch (i)

		{

				int i = 20;

				case 10 :

				{ int i = 30;

						printf ("%d\n",i);

						int   p = 20;

						printf ("%d\n",i);

						//				break;

				}		

				printf ("%d\n",i);

		}

		return 0;

}

#endif
#if 0
int main ()

{

		int *p;

		int *s;

		p = malloc(20);

		s = p;

		free(p);

		p = NULL;

		//	free(s);

		//	s = NULL;

		return 0;

}

#endif
