


#if 0

#define A 1
int main()

{
		int v = A;
		extern int g;
#undef A

#define A 2
		printf("%d\n\n",A);
#undef A

#define A 3
		printf("%d\n\n",A);
#undef A

#define A 4

		return 0;
}
int g = A;
#endif
#include<stdio.h>
#if 0
int main()
{
		printf("FILE:%s\n",__FILE__);
		printf("LINE:%d\n",__LINE__);
		printf("DATE:%s\n",__DATE__);
		printf("TIME:%s\n",__TIME__);
		printf("%d\n",MAX);
		return 0;
}
#endif
#if 0 
#ifndef __STDIO_H
#define __STDIO_H

#include<stdio.h>
int main()
{
	
	printf("MESSI\n");
	return 0;
}

#endif
#endif
