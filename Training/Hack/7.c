#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 100
int main() {

	char *ptr = (char*) malloc(SIZE);
	/*if(ptr == NULL)
	  {
	  perror("malloc");
	  return ;
	  }
	 */
	int i = 0;
	int j = 0;

	fgets(ptr,SIZE,stdin);

	for(i = 0; ptr[i] !='\n' ; i++){
		for(j = 0; ptr[j] != '\n' ; j++)
		{
			if(ptr[i] == ptr[j])
			{
				memmove(ptr+j, ptr+j+1,strlen(ptr)+1);
				j--;
			}
		}
	}
	printf("%s",ptr);

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	return 0;
}
