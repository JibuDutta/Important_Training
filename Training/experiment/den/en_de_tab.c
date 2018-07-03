#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void en_tab(char *ptr,int);

int main(int argc,char *argv[])
{

	char *str = (char*) malloc (SIZE);
	
	if(argc>2)
	{
		printf("INVALID ARGUMENTS");
		return 0;
	}

	
	printf("ENTER STRING\n");
	fgets(str,SIZE,stdin);

	en_tab(str,*argv[2]);

	printf("%s\n", str);
	

	return 0;
}

void en_tab(char *ptr,int num)
{
	int i=0;
	int j=0;
	int cnt;
	char str[SIZE];	
	FILE *fp = fopen ("11.c", "w");

	while ( ptr[i] != '\0' ) {
		if(ptr[i] ==' ')
		{
			cnt = 0;
			
			while(ptr[i] == ' ' &&  cnt != num)
			{
				cnt++;
				i++;
			}
		
			if(cnt==num)
				str[j++] = '\t';
			else
				while(cnt--)
					str[j++] = ' ';

		}
		else
			str[j++] = ptr[i++];

	}
	str[j] = '\0';

	fputs(str, fp);

	fclose(fp);
}


