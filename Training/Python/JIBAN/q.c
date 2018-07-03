#include<stdio.h>
void fun(int , int ,int );


int main(){

	int n = 47;
	int a = 0 ; 
	int b = 1 ;

	printf("%d\n%d\n",a,b);
	fun(a,b,n);

	return 0;
}

void fun (int x , int y , int z){
	if((z-2)>0){
		printf("%d\n",x+y);
		fun(y,x+y,z-1);
	}

}

