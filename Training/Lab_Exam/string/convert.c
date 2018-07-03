#include<stdio.h>
char* convert_string(char *ptr);

int main()
{

		char str[100];
		int i;

		printf("ENTER THE STRING\n");
		fgets(str,100,stdin);

		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		convert_string(str);

		printf("CONVERTED STRING:%s\n",str);

		return 0;
}

char* convert_string(char *ptr)
{
		int i;

		for(i=0;ptr[i];i++)
		{
				if((ptr[i]>=65)&&(ptr[i]<=90))
				{
						ptr[i]=ptr[i]+32;
				}
				else if ((ptr[i]>=97)&&(ptr[i]<=122))
				{
						ptr[i]=ptr[i]-32;
				}
				else
					; /*if(((ptr[i]>=0)&&(ptr[i]<=64))||((ptr[i]>=91)&&(ptr[i]<=96))||((ptr[i]>=123)&&(ptr[i]<=127)))	
				{
				ptr[i]=ptr[i]-0;
				} */
		}
		return ptr;

}
