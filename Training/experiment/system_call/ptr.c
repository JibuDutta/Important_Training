#include<stdio.h>
main()
{
int a[3][3]={11,12,13,14,15,16,17,18,19};
int **p=a;
//int (*p)[3]=a;
printf("%d\n",*(*(p+1)+1));
}
