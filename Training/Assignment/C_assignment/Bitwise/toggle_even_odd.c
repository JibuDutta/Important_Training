#include<stdio.h>

int even_bit_toggle (int num);
int odd_bit_toggle (int num);
unsigned int binary(int num);



int main()
{
		int num,i,temp;

		printf("ENTER THE NUMBER\n");
		scanf("%d",&num);
		temp=num;

		binary(num);

		num = even_bit_toggle (num);
		temp = odd_bit_toggle (temp);

	//	printf("%d\n",num);

		binary(num);

		
	//	printf("%d\n",temp);
		
		binary(temp);

		return 0;
}

int even_bit_toggle (int num)
{
	int i;
	for(i=31;i>=0;i--) {
		if(i%2==0) {
			num=(num ^ (1<<i));
	    }
   }

	return num;
}
 
int odd_bit_toggle (int num)
{
		int i;
		for(i=31;i>=0;i=i-2)
		{
						num=(num ^ (1<<i));
		}
		return num;
}

unsigned int binary(int num)
{
 int i;
	for(i=31;i>=0;i--)
			printf("%d",((num>>i)&1));	

	printf("\n");
}
