#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char* str1 = (char*)malloc(100);
	char* str2 = (char*)malloc(100);

	fgets(str1,100,stdin);
//	str1[strlen(str1)-1] = '\0';
	
	fgets(str2,100,stdin);
//	str2[strlen(str2)-1] = '\0';

	
	printf("%s",str1);
	printf("%s",str2);

	return 0;
}
