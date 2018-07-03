#include<stdio.h>

#define clear_rightmost_setbit(num,i) if(num & (1<<i)) \
                         { \
							num=(num &( ~(1<<i)));  \
							break; \
						} 
					



#define set_bit_pos(num,i) ((((i>=spos )&&(i<=dpos)) || ((i>=dpos) &&(i<=spos))) ? (num = (num | (1<<i))) : (num = (num &~(1<<i))))

//#define clear_bit_pos(num,i) (((i>=spos) && (i<=dpos)) ? (num = (num & ~(1<<i))) : (num = num |(1<<i)))

//#define toggle_bit_pos(num,i)  (((i>=spos)&&(i<=dpos)) ? (num = (num ^ (1<<i))) : (num = num))


void binary(int);

#if 0 

int main()

{

		int num,pos,i;

		printf("ENTER THE NUMBER\n");
		scanf("%d",&num);

		binary(num);

		for(i=0;i<=31;i++)
		{	
				clear_rightmost_setbit(num , i)

		}



/*		for(i=31;i>=0;i--)
		{
			if(num & (1<<i))
			{
			num = (num & ~(1<<i));
			break;
			}
		}
*/
		binary(num);

		return 0;
}
#endif

/*To set bits from bit position ‘s’ to bit position ‘d’ in a given number and clear rest of the
bits*/

#if	1 


int main()
{
	int i, num,spos,dpos;
	printf("ENTER A NUMBER\n");	
	scanf("%d",&num);


	binary(num);
	
	printf("ENTER SOURCE AND DESTINATION POSITION\n");
	scanf("%d %d",&spos,&dpos);

	for(i=31;i>=0;i--)
	{
		set_bit_pos(num,i);
	}
	
	binary(num);
	
	return 0;
}


#endif

/*
To clear bits from bit position ‘s’ to bit position ‘d’ in a given number and set rest of the
bits*/
#if 0

int main()
{
	int i, num,spos,dpos;
	printf("ENTER A NUMBER\n");	
	scanf("%d",&num);


	binary(num);
	
	printf("ENTER SOURCE AND DESTINATION POSITION\n");
	scanf("%d %d",&spos,&dpos);

	for(i=31;i>=0;i--)
	{
		clear_bit_pos(num,i);
	}
	
	binary(num);
	
	return 0;

}

#endif

/*To toggle bits from bit position ‘s’ to bit position ‘d’ in a given number*/

#if 0
int main()
{
    int i, num,spos,dpos;
    printf("ENTER A NUMBER\n");   
    scanf("%d",&num);


    binary(num);
    
    printf("ENTER SOURCE AND DESTINATION POSITION\n");
    scanf("%d %d",&spos,&dpos);

    for(i=31;i>=0;i--)
    {
        toggle_bit_pos(num,i);
    }
    
    binary(num);
    
    return 0;

}

#endif 

void binary(int num)
{
		int i;
		for(i=31;i>=0;i--)
				printf("%d",((num >> i) &1));

		printf("\n");
}
