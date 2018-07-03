#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	char* str = (char *)malloc(10240 * sizeof(char));
	scanf("%s",str);

	int wc = 0;

	int len = strlen(str);

	int n = len/3;

	int i = 0;

	//for(i = 0; str[i];i++){
	if(strstr(str,"SOS"))
		wc++;
	// }
	printf("%d",n-wc);
	return 0;
}
