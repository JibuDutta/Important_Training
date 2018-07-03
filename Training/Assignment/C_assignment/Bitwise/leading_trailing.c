#include<stdio.h>
void binary(int num);
int cnt_trailing_cleared_bits (int num);
int cnt_leading_cleared_bits (int num);
int cnt_trailing_set_bits (int num);
int cnt_leading_set_bits (int num);

int main()

{
		int num;
		int leading_clear_bits,trailing_clear_bits;
		int leading_set_bits,trailing_set_bits;

		printf("ENTER THE NUMBER\n");
		scanf("%d",&num);
		
		binary(num);



	 	leading_clear_bits = cnt_leading_cleared_bits (num);
		
		trailing_clear_bits = cnt_trailing_cleared_bits (num);
	 	
		leading_set_bits = cnt_leading_set_bits (num);
		
		trailing_set_bits=cnt_trailing_set_bits (num);



		printf("NO OF LEADING_CLEARED_BIT:=%d\n",leading_clear_bits);
		printf("NO OF TRAILING_CLEARED_BIT:=%d\n",trailing_clear_bits);
		printf("NO OF LEADING_SET_BIT:=%d\n",leading_set_bits);
		printf("NO OF TRAILING_SET_BIT:=%d\n",trailing_set_bits);
		
		return 0;

}

void binary(int num)
{
		int i;
		for(i=31;i>=0;i--)
				printf("%d",((num>>i)&1));
		printf("\n");

}


int cnt_leading_cleared_bits (int num)
{
int i,leading_cleared_bits=0;

		for(i=31;i>=0;i--)
		{
				if(!(num & (1<<i)))
				{
						leading_cleared_bits++;
				}
				else 
				break;
		}
		return leading_cleared_bits;
}

int cnt_trailing_cleared_bits (int num)
{
int i,trailing_cleared_bits=0;

		for(i=0;i<=31;i++)
		{
				if(!(num & (1<<i)))
				{
						trailing_cleared_bits++;
				}
				else 
				break;
		}
		return trailing_cleared_bits;
}

int cnt_leading_set_bits (int num)
{
int i,leading_set_bits=0;

		for(i=31;i>=0;i--)
		{
				if(num & (1<<i))
				{
						leading_set_bits++;
				}
				else 
				break;
		}
		return leading_set_bits;
}

int cnt_trailing_set_bits (int num)
{
int i,trailing_set_bits=0;

		for(i=0;i<=31;i++)
		{
				if(num & (1<<i))
				{
						trailing_set_bits++;
				}
				else 
				break;
		}
		return trailing_set_bits;
}

