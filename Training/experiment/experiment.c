#include<stdio.h>
/*sum of two no in main */
#if 0 
main()
{

	int num1,num2,sum=0;
	printf("enter the 1st no\n");
	scanf("%d",&num1);

	printf("enter the 2nd no\n");
	scanf("%d",&num2);

	sum=num1+num2;

	printf("the sum of the no is %d\n",sum);

}
#endif

/*sum of two no using function */
#if 0 
int sum(int,int);
main()
{

	int num1,num2;
	printf("enter the 1st no\n");
	scanf("%d",&num1);

	printf("enter the 2nd no\n");
	scanf("%d",&num2);


	printf("sum of two no is %d\n",sum(num1,num2));

}
int sum(int n1,int n2)
{
	int add;
	add=n1+n2;
	return add;
}
#endif

/*wap to reverse of a no*/

#if 0 
main()
{
	int num,digit,rev=0;
	printf("enter a no\n");
	scanf("%d",&num);
	while(num)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	printf("the reverse of the no is %d\n",rev);
}
#endif



/*the given no is prime or not*/
#if 0 
main()
{
	int num,i,cnt=0;
	printf("enter the no\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			cnt++;
	}

	if(cnt==2)
		printf("the given no %d is a prime no\n",num);
	else
		printf("the given no %d is not a prime no\n",num);

}
#endif
//the given no is odd or even
#if 0 
main()
{
	int num,i;
	printf("enter the no\n");
	scanf("%d",&num);
	if(num%2==0)
		printf("the given no %d is a even no\n",num);
	else
		printf("the given no %d is a odd no\n",num);

}
#endif
/*swapping of two no using temp */
#if 0 
main()
{
	int num1,num2,temp;
	printf("enter the nos\n");
	scanf("%d%d",&num1,&num2);

	temp=num1;
	num1=num2;
	num2=temp;

	printf("after swapping the no num1=%d and num2=%d\n",num1,num2);
}
#endif
//swapping of two no without using temp
#if 0  
main()
{
	int num1,num2;
	printf("enter the nos\n");
	scanf("%d%d",&num1,&num2);

	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;

	printf("after swapping the no num1=%d and num2=%d\n",num1,num2);
}
#endif


/*wap to pallindrome of a no*/

#if 0  
main()
{
	int num,digit,rev=0,temp;
	printf("enter a no\n");
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}

	if(temp==rev)
		printf("the given number is pallindrome\n");
	else
		printf("the given number is not a pallindrome\n");

}
#endif

//the no is perfect no or not
#if 0 
main()
{
	int num,i,sum=0;
	printf("enter a no\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(sum==num)
		printf("the given number is perfect\n");
	else
		printf("the given number is not a perfect number\n");
}
#endif

#if 0 
double fact( int num);

main()
{
	int num;
	printf("enter a no\n");
	scanf("%d",&num);
	printf("the factorial of the given no %d is %lf\n",num,fact(num));
}
double fact( int num)
{
	double factorial=1;
	while(num)
	{
		factorial=factorial*num;
		num--;
	}
return factorial;
}
#endif

#if 1
void fun(void)
{
i=20;
}
int main()
{
int i=10;
fun();
printf("%d\n",i);
}
//extern int i;
#endif
