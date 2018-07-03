#include<stdio.h>
#if 0
int main()
{
	char *ptr ="NULL\0";
	printf("%s",ptr);
	return 0;
}
#endif

#if 0
#define MAXARR 100
int main()
{
	char str1[MAXARR] = "ab cde ef", str2[MAXARR] ,str3[MAXARR];
	sscanf(str1,"%s",str2);
	printf("str2 = %s",str2);
	sscanf(str1,"%s%s",str2,str3);
	printf("str2 = %s str3 = %s\n",str2,str3);
	return 0;
}
#endif

#if 0
main()
{
	int r=0,x=5,y=6;
	if(r=x!=y)
			printf("inside");
	else
			printf("outer");


	printf("%d",r);
}
#endif
#if 0
int main()
{
	int x=20, y=5, a=0X07 , b=0;

	if(x>y&&x!=10)
	{
	
			printf("JIban");	


	}
	else
	{
			a+= 5* a>>3 / b++ | x*4 * 2 -3;
	}
	printf("%d",a);
}
#endif
#if 0
int main()
{
	int x =5 ,*p;
	p=&x;

	printf("%d \n",++*p);
	return 0;
}
#endif
char a[]= "RAM\0";
int main()
{
	char a[]="ram";
	char b[]="hari";
	int i;

	 for(i=0;a[i]!='\0';i++)
		 	b[i]=a[i];

	 b[i]='\0';
	 printf("a=>   %s....%d\n",b,sizeof(a));
	 printf("b=> %d\n",sizeof(b));
	 return 0;

}
