#include<stdio.h>
#include<string.h>

char * insertchar (char *str, const char ch, int pos);


int main()
{
		char str[100];
		char ch;
		int pos,i;

		printf("ENTER THE STRING\n");
		fgets(str,100,stdin);

		for(i=0 ; str[i] !='\n' ; i++);
		str[i]='\0';

		printf("ENTER THE CHARACTER\n");
		fgets(&ch,4,stdin);

		printf("ENTER THE POSITION WHERE YOU WANT TO INSERT\n");
		scanf("%d",&pos);

		insertchar(str,ch,pos);


		printf("STRING IS:%s\n",str);

		return 0;
}

char * insertchar (char *str, const char ch, int pos)
{

		int length=strlen(str);

		if(length<pos)
		{
				printf("ENTER VALID POSITION\n");
				return str;
		}
		while(length>pos)
		{
				str[length]=str[length-1];
				length--;
		}
		str[length]=ch;


}


