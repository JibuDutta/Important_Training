#include<stdio.h>
#define clear_right_most_setbit(num,i) if(num & (1<<i))\
										{\
										(num=(num & (~(1<<i))));\
										break;\
										} 

#define set_right_most_cleared_bit(num,i) if(!(num &(1<<i)))\
										{\
										num=(num | (1<<i));\
										break;\
										}


#define set_bit_pos(num,i) ((((i>=spos )&&(i<=dpos)) || ((i>=dpos)&&(i<=spos))) ? (num = (num | (1<<i))) : (num = (num &~(1<<i))))

#define clear_bit_pos(num,i) ((((i>=spos) && (i<=dpos)) ||((i>=dpos)&&(i<=spos))) ? (num = (num & ~(1<<i))) : (num = num |(1<<i)))

#define toggle_bit_pos(num,i)  ((((i>=spos)&&(i<=dpos)) || ((i>=dpos)&&(i<=spos))) ? (num = (num ^ (1<<i))) : (num = num))

#define max(num1,num2) ((1<<31)&(num1-num2)) ? printf("2nd No= %d is Greater\n\n",num2) : printf("1st No = %d is Greater\n\n",num1)

void binary(int num);

int main()
{
	char choice;
	int i;
	int num;
	int spos;
	int dpos;
	
	while(1)
	{
		printf("\n\n*******LIST OF OPERATION*******\n\n");
		printf("a: To find maximum and minimum of 2 numbers\n");
		printf("b: To clear right most set bit in a number\n");
		printf("c: To clear left most set bit in a number\n");
		printf("d: To set right most cleared bit in a number\n");
		printf("e: To set left most cleared bit in a number\n");	
		printf("f: To set bits from bit position ‘s’ to bit position ‘d’ in a given number and clear rest of the bits\n");
		printf("g: To clear bits from bit position ‘s’ to bit position ‘d’ in a given number and set rest of the bits\n");		
		printf("h: To toggle bits from bit position ‘s’ to bit position ‘d’ in a given number\n");
		printf("q: QUIT\n\n");
	
		printf("ENTER YOUR CHOICE\n");
		scanf(" %c",&choice);
	
		switch(choice)
		{
		
		case 'a':
		case 'A':printf("ENTER THE 1st No\n");
				scanf("%d",&spos);	
				
				printf("ENTER THE 2nd No\n");
				scanf("%d",&dpos);
				
				max(spos,dpos);	

			
				break;
		
		case 'b':
		case 'B':printf("ENTER THE NO\n");
				scanf("%d",&num);

				binary(num);

				for(i=0;i<=31;i++)
				{
					clear_right_most_setbit(num,i)
				}
				
				binary(num);
				
				break;
		
		case 'c':
		case 'C':printf("ENTER THE NO\n");
				scanf("%d",&num);
				
				binary(num);
				
				for(i=31;i>=0;i--)
				{
					clear_right_most_setbit(num,i)
				}
				
				binary(num);
				
				break;

		case 'd':
		case 'D':printf("ENTER THE NO\n");
				 scanf("%d",&num);
				
		   		binary(num);
	
				for(i=0;i<=31;i++)
				{
					set_right_most_cleared_bit(num,i)
				}
	
				binary(num);

				break;

		case 'e':
		case 'E':printf("ENTER A NUMBER\n");
				scanf("%d",&num);

                binary(num);

                for(i=31;i>=0;i--)
                {
                    set_right_most_cleared_bit(num,i)
                }
    
                binary(num);
				
				break;

		case 'f':
		case 'F': printf("ENTER A NUMBER\n"); 
    			  scanf("%d",&num);

    			binary(num);
    
   				printf("ENTER SOURCE AND DESTINATION POSITION\n");
   				scanf("%d %d",&spos,&dpos);

 			   for(i=31;i>=0;i--)
    			{
   	     			set_bit_pos(num,i);
   				}
    
			    binary(num);

				break;

		case 'g':
		case 'G':printf("ENTER A NUMBER\n"); 
    			scanf("%d",&num);

    			binary(num);
    
			    printf("ENTER SOURCE AND DESTINATION POSITION\n");
   				scanf("%d %d",&spos,&dpos);

    			for(i=31;i>=0;i--)
    			{
        			clear_bit_pos(num,i);
   			 	}
    
   			 	binary(num);
				
				break;

		case 'h':
		case 'H':printf("ENTER A NUMBER\n");   
   				scanf("%d",&num);

			    binary(num);
    
   				printf("ENTER SOURCE AND DESTINATION POSITION\n");
			    scanf("%d %d",&spos,&dpos);

    			for(i=31;i>=0;i--)
    			{
        		toggle_bit_pos(num,i);
    			}
    
    			binary(num);
    			
				break;
				
		case'Q':
		case 'q':return 0;
		
		default:printf("INVALID CHOICE\n");
		
		}
	}
	return 0;
}

void binary(int num)
{
	int i;

	for(i=31;i>=0;i--)
		printf("%d",((num>>i)&1));
	
	printf("\n");
}

