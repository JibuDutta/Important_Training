#include<stdio.h>

#define C(c)  #c
#define D(x,y)  x##y


int main(void)
{
	
		printf("%s\n",C(Jiban));
		printf("%s\n",C(123));
		printf("%d\n",D(123,45));
		
		return 0;
}


