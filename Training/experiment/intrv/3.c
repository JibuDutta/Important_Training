#include<stdio.h>                                                               
int main(void)                         
{                                                                               
	int a = 1;                                                                  
	int *ptr = &a;                                                                   
	
	unsigned int num;
	printf("Enter the no\n");
	scanf("%d",&num);

	int i;
	for(i=31;i>=0;i--)
		printf("%d",(num >> i) & 1 );
	printf("\n");

	if(*(char*)ptr == 1)                                                        
	{                                                                           
		printf("Little\n");                                                     
		
		num = (num << 24)|(num >> 24) | ((num & (~(255)) & (~(255<<16)))<<8) |((num & (~(255<<8)) & (~(255<<24)))>>8);


	}                                                                           
	
	for(i=31;i>=0;i--)
		printf("%d",(num >> i) & 1 );
	printf("\n");

	return 0 ;                                                                
}              
