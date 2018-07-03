#include<stdio.h>
#include<string.h>
#define SIZE 100


int count_setbit(char *ptr);

int main()
{

		char str[SIZE];
		int i;
		int n=0;

		printf("ENTER THE STRING\n");
		fgets(str,SIZE,stdin);

		for(i=0;str[i]!='\n';i++);
		str[i]='\0';

		n=count_setbit(str);

		if(n)
				printf("\nNO OF SETBITS:%d\n",n);

		else
				printf("\nINVALID INPUT:GIVE PROPER INPUT\n");

		return 0;
}


int count_setbit(char *ptr)
{

		int count=0;
		int i=0;
		int j;
		int num;


		for(i=0;ptr[i];i++)
		{
				if(((ptr[i]>=65) && (ptr[i]<=90)) || ((ptr[i]>=97) && (ptr[i]<=122)))
				{

						for(j=7;j>=0;j--)

						{
								printf("%d",((ptr[i] >> j) & 1));

								if(ptr[i] & (1<<j))
										count++;
						}

						printf("	");

				}

				else
						return 0;
		}

		return count;

}
