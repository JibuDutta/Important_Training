#include<stdio.h>
#include<string.h>
void my_strrev(char *str);
int my_strlen(char *ptr);

int main()
{
		char str[100],temp[100];
		printf("ENTER THE STRING\n");
		fgets(str,100,stdin);

		strcpy(temp,str);

		my_strrev(str);

		if(strcmp(temp,str))
				printf("THE STRING IS NOT PALLINDROME");
		else
				printf("THE STRING IS PALLINDROME");

		return 0;
}
void my_strrev(char *str)
{
		char ch;
		int i,j;
		for(i=0,j=my_strlen(str)-2;i<j;i++,j--)
		{
				ch=str[i];
				str[i]=str[j];
				str[j]=ch;
		}

}
int my_strlen(char *ptr)
{
		int i;
		for(i=0;ptr[i];i++);
		return i;
}
