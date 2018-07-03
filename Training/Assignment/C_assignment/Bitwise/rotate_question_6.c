#include<stdio.h>

void binary(int);


//unsigned int left_rotate_bits (unsigned int num);
//unsigned right_rotate_bits (unsigned int num);

 unsigned int left_rotate_n_bits (unsigned int num,int n);
 
unsigned int right_rotate_n_bits (unsigned int num,int);


#if 0 

int main()
{

		int num,temp;

		printf("ENTER A NUMBER\n");
		scanf("%d",&num);

		temp=num;

		binary(num);

		num = left_rotate_bits (num);
		temp =right_rotate_bits (temp);

		binary(num);
		binary(temp);



}
unsigned int left_rotate_bits (unsigned int num)
{

		num = ((num << 1) | (num >>31));

		return num;


}

unsigned int right_rotate_bits (unsigned int num)
{

		num = ((num >> 1) |(num << 31));

		return num;
}

#endif


#if 1

int main()

{

		int temp,num,no_bits;

		printf("ENTER THE NUMBER\n");
		scanf("%d",&num);

		temp=num;

		binary(num);

		printf("ENTER HOW MANY BITS YOU WANT to SHIFT\n");
		scanf("%d",&no_bits);

		num = left_rotate_n_bits (num, no_bits);
		temp = right_rotate_n_bits (temp, no_bits);

 		binary(num);

		binary(temp);


}

unsigned int left_rotate_n_bits (unsigned int num,int n)
 {

	num = ((num << n) | (num >> (32-n)));

	return num;


 }

unsigned int right_rotate_n_bits ( unsigned int num,int n)
 {

	num = ((num >> n) |(num << (32-n)));

	return num;

}
//#endif
void binary(int num)

{

        int i;

        for(i=31;i>=0;i--)
        {
                printf("%d",((num >> i ) & 1));
        }
        printf("\n");

}

#endif
