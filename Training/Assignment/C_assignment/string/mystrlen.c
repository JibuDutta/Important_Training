#include<stdio.h>
unsigned int mystrlen(char *ptr);
int main()
{
		char str[100];
		printf("ENTER THE STRING\n");
		fgets(str,100,stdin);
		int i=mystrlen(str)-1;

		printf("STRING LENGTH is:%d\n",i);
		return 0;
}

unsigned int mystrlen(char *ptr)
{
		int i;
		for(i=0;ptr[i];i++);
		return i;
}
