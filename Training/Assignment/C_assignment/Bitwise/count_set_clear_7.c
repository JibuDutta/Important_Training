#include<stdio.h>
int count_bit_set (int num);
int count_bit_clear (int num);
unsigned int binary(int num);

int main()
{

	int i,num,set_bit,clear_bit;

	printf("ENTER A NUMBER\n");
	scanf("%d",&num);
	binary(num);

	set_bit=count_bit_set (num);
	clear_bit=count_bit_clear (num);


	printf("No Of SetBit:%d\n",set_bit);
	printf("No Of ClearBit:%d\n",clear_bit);

	return 0;
}

int count_bit_set (int num)
{
	int i,set_count=0;
	
	for(i=31;i>=0;i--)
		{
			if(num & ( 1 << i))
				set_count++;
		}
	return set_count;
}
int count_bit_clear (int num)
{
	int i,clear_count=0;
	
	for(i=31;i>=0;i--)
		{
			if(!(num & ( 1 << i)))
				clear_count++;
		}
	return clear_count;
}

unsigned int binary(int num)
{

int i;

	for(i=31;i>=0;i--)
		printf("%d",((num>>i)&1));

	printf("\n");
}

