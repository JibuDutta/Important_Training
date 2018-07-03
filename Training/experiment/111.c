#include/*hello*/<stdio.h>

#if 0
int main()

{

        char arrc[] = {1, 2 ,3};

        char *ptrc = arrc;

        printf("sizeof arrc[] = %d ", sizeof(arrc));

        printf("sizeof ptrc = %d ", sizeof(ptrc));


        return 0;

}
#endif

#if 1
int main ()

{

        int *p;

        p = 100;

 //       *p = 19;

        printf ("%d\n", p);

        return 0;

}

#endif
#if 0 

int main()

{

        int *p = 10;
int a;
        p++;

        printf ("p = %d\n", p);

        //return 0;
		printf("enter the no\n");
		scanf("%d",&a);
		(!((a & 1)  && printf("odd")) && printf("even"));

		return 0;
}

#endif
#if 0
struct { 

       short s[5];

            union { 

                      float y; 

                      long z; 

             }u; 

 } t;



main()
{
printf("Struct size is %d:\n",sizeof(t));
}

#endif

/*
struct temp

{

	int a:13;

	int b:8;

	int c:12;

}s;

int main()
{
	printf("SIZE=%d:",sizeof(struct temp));
	return 0;
}

*/
