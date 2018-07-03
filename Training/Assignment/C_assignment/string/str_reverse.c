#include<stdio.h>
void mystrreverse(char *str);
int mystrlen(char *p);
int main()
{
		char str[100];

		printf("ENTER THE STRING:");
		fgets(str,100,stdin);
		mystrreverse(str);

		printf("Reverse:%s\n",str);
		return 0;
}
void mystrreverse(char *ptr)
{
		int i,j;
		char temp;
		j=mystrlen(ptr)-1;
		j=mystrlen(ptr)-2;
		for(i=0;i<j;i++,j--)
		{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
		}
}
int mystrlen(char *p)
{
		int i;
		for(i=0;p[i];i++);
		return i;
}
