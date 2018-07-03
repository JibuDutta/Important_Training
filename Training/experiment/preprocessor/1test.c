//#include<stdio.h>

//#include<stdlib.h>
//#include<assert.h>

#if 0
int main()
{

	int x=9;
	A:
	assert(x<10);
	printf("%d\n",x++);
	goto A;

	return 0;
}

#endif
#if 0 
int main()
{
   int a;
   char str[50];
	 
   printf("Enter an integer value: ");
   scanf("%d", &a);
   assert(a >= 10);
   printf("Integer entered is %d\n", a);
    
   printf("Enter string: ");
   scanf("%s", str);
   assert(str != NULL);
   printf("String entered is: %s\n", str);
	
   return(0);
}

#endif

#if 1
#include<stdio.h>
#include<math.h>


//#define __MATH_H
#ifndef __MATH_H
#error First include __MATH_H then compile
#else
int main(){
    float a,b=25;
    a=sqrt(b);
    printf("%f",a);
    return 0;
}
#endif



#endif
