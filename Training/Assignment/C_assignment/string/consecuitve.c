#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

void consecutive(char *ptr);


int main()
{

		char *str = (char*)malloc(MAX);

		printf("ENTER A STRING\n");
		fgets(str,100,stdin);

		consecutive(str);

		printf("STRING:%s",str);

		return 0;

}
void consecutive(char *ptr)
{
		int i,j;
		int cnt = 0;
		for(i=0;ptr[i];i++)
		{
				for(j=0;ptr[j];j++)
				{
						if(i==j)
								continue;

						if(ptr[i]==ptr[j])
						{
								memmove(ptr+j,ptr+j+1,strlen(ptr+j+1)+1);
								j--;
								cnt++;
						}
				}

		}
		printf("%d\n",cnt);
}
