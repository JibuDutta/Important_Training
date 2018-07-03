#include<stdio.h>
#include<math.h>
#define __MATH_H
#ifndef __MATH_H
#error First include __MATH_H then compile
#else
int main(void)
{
    float a = 0;
	float b=25;

    a=sqrt(b);

    printf("%f",a);
    return 0;
}
#endif



