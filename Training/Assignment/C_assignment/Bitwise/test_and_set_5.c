#include<stdio.h>

#define bit_ts(num,pos)   (num & (1<<pos)) ? printf("BIT IS SET\n"):printf("BIT IS CLEAR\n")
#define	set_bit(num,pos)  (num | (1<<pos))  

void binary(int num);

int main()
{

		int num,pos,bit;

		printf("ENTER A NUMBER\n");
		scanf("%d",&num);
		binary(num);

		printf("ENTER A POSITION 0 to 31\n");
		scanf("%d",&pos);

		bit_ts(num,pos);
		num=set_bit(num,pos);
		

		binary(num);
		

		return 0;
}

void binary(int num)
{

		int i;

		for(i=31;i>=0;i--)
				printf("%d",((num>>i) &1));

		printf("\n");

}
