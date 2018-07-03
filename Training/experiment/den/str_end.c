#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
int str_end (char *src, char *tar);		

int main(void)
{
	char *src = (char*) malloc(SIZE);
	char *tar = (char*) malloc(SIZE);
	int n = 0;

	printf("ENTER SOURCE STRING\n");
	fgets(src,SIZE,stdin);

	printf("ENTER TARGET STRING\n");
	fgets(tar,SIZE,stdin);
	
	n = str_end(src,tar);
	if(n == 1)
		printf("FOUND AT LAST\n");
	else
		printf("NOT FOUND \n");
	return 0;
}

int str_end (char *src, char *tar)		
{
	int i = 0;
	int j = 0;
	int cnt1 = 0;
	int cnt2 = 0;

	while( src[i]!='\n') {
		cnt1++;
		i++;
	}
	while( tar[j]!='\n') {
		cnt2++;
		j++;
	}
	while(cnt2!=0)	{
		if(tar[cnt2-1] == src[cnt1-1])
			{
				cnt1--;
				cnt2--;
				if(cnt2==0)
				{
					return 1;
				}
			}
		else
			return 0;
	}
	
}

