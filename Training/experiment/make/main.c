#include"header.h"
int main(void)
{
	int a,b;
	printf("Enter the No\n");
	scanf("%d%d",&a,&b);
	printf("sum  = %d\n",sum(a,b));
	printf("diff  = %d\n",diff(a,b));

	printf("multiplication  = %d\n",mul(a,b));
	printf("division  = %d\n",div(a,b));
		
	return 0;
}
