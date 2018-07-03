#include<stdio.h>
int my_atoi(const char *ptr);

int main(int argc,char **argv)
{
	
	printf("%d\n",my_atoi("15") *my_atoi("9") );
//	printf("%d",my_atoi("ABCD"));
	return 0;
}

int my_atoi(const char *ptr)
{

	int i = 0;
	int digit = 0;
	int result = 0;

	if(ptr[i]>='0' && ptr[i]<='9')
	for(i = 0; ptr[i]; i++)
	{
//		if(ptr[i]>='0' && ptr[i]<='9')
		{
			digit = ptr[i] - 48;
			result = result*10 + digit;
		}
	}

//	else
//		printf("can not\n");

	return result;

}
