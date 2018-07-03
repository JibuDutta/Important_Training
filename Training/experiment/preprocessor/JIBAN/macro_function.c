#include<stdio.h>                                                               
#define clear_right_most_setbit(num,i) if(num & (1<<i))\
										{\
											(num = (num & (~(1<<i))));\
												break;\
										}    
void binary (int num);

int main(void)
{
		int i = 0;
		int num = 0;
		printf("ENTER THE NO\n");                                      
		scanf("%d",&num);                                               

		binary(num);                                                    

		for(i = 0 ; i <= 31; i++)                                              
		{                                                               
				clear_right_most_setbit(num,i)                              
		}                                                               

		binary(num);  
		return 0;
}

void binary(int num)                                                            
{                                                                               
    int i;                                                                      
                                                                                
    for(i=31;i>=0;i--)                                                          
        printf("%d",((num>>i)&1));                                              
                                                                                
    printf("\n");                                                               
}                                                                               
           
