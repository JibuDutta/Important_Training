#include<stdio.h>
#define FLAG

int main(void)
{
#ifdef FLAG
	printf("FIRST\n");
#else
	printf("SECOND\n");
#endif

return 0;

}
