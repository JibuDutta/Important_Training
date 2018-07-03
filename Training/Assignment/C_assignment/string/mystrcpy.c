#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

char* mystrcpy(char *tar,const char *src); /*declaration */

int main()
{
		char *src = (char*)malloc(SIZE); /*dynamically allocated memory*/
		char *tar = (char*)malloc(SIZE);


		printf("Enter the Source String\n"); /*user input  */
		fgets(src,100,stdin);

		mystrcpy(tar,src); /*calling function*/

		printf("TARGET:%s",tar);

		return 0;
}

char* mystrcpy(char *tar,const char *src) /*definition of the strcpy*/
{
		int i;

		for(i = 0 ; src[i] ; i++){
				tar[i] = src[i];
		}

		tar[i]='\0'; 

		return tar;
}
