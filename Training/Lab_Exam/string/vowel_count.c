#include<stdio.h>
int count_vowels(char *ptr);

int main()
{

		char str[100];
		int i,cnt;


		printf("ENTER THE STRING\n");
		fgets(str,100,stdin);
		
		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		cnt=count_vowels(str);

		printf("TOTAL VOWELS=:%d\n",cnt);

		return 0;
}

int count_vowels(char *ptr)
{
		int i,cnt=0;

		for(i=0;ptr[i];i++)
		{
				if((ptr[i]=='A')||(ptr[i]=='E')||(ptr[i]=='I')||(ptr[i]=='O')||(ptr[i]=='U')||(ptr[i]=='a')||(ptr[i]=='e')||(ptr[i]=='i')||(ptr[i]=='o')||(ptr[i]=='u'))

						cnt++;

		}

		return cnt;
}
