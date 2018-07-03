#include<stdio.h>
#if 1
union endian
{
		int  a;
		char b;

};
int main()
{
		union endian v = { 1 };

		if (v.b == 1)
				printf("LITTE ENDIAN \n");
		else
				printf("BIG ENDIAN\n");
		
		return 0;
}
#endif

#if 0
int main()
{
		int a=1;
		char *ptr;
		*ptr=(char)* &a;

		if((*ptr)==1)
				printf("LITTLE ENDIAN\n");

		else
				printf("BIG ENDIAN\n");


		return 0;
}

#endif
