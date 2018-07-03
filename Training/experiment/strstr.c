#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*char* mystrstr (const char *ptr1, const char* ptr2)
{
	int i , j , k;

	for(i = 0 ; ptr1[i] ; i++)
	{
		k = i;
		j = 0;

		while( (ptr1[k] == ptr2[j]) && (ptr1[k] != '\0') && (ptr2[j] != '\0'))
		{
			j++;
			k++;

		}
		if(j ==  strlen(ptr2))
		{
			return (char*)ptr2;
		}
	}
	return NULL;

}*/
char mystrstr(const char *str1,const char *str2)                              
{                                                                               
	int i = 0;                                                              
	int j = 0;                                                              
	int k = 0;                                                              

	for(i = 0 ; str1[i] ; i++)                                              
	{                                                                       
		k = i;                                                          
		j = 0;                                                          
		while( (str1[k] == str2[j] ) &&(str2[j]!='\0') &&(str1[k]!='\0'))
		{                                                               
			k++;                                                    
			j++;                                                    
		}                                                               

		if(j ==strlen(str2))                                            
		{                                                               
			return (char*)str2;                                     
		}                                                               
	}                                                                       

	return NULL;                                                            


}
int main()
{
	char *str1 = (char*) malloc(100);
	char *str2 = (char*) malloc(100);

	int i = 0;
	printf("Enter string 1:");
	fgets(str1,100,stdin);
	for(i = 0 ; str1[i] != '\n'; i++)
		str1[i] = '\0';

	printf("Enter string 2:");
	fgets(str2,100,stdin);
	for(i = 0 ; str2[i] != '\n' ; i++)
		str2[i] = '\0';

	if(mystrstr ( str1, str2))
	{
		printf("Present \n");
	}
	else
	{
		printf("Not Present \n");
	}
	return 0;
}

