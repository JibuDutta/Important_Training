#include<stdio.h>

int main(){
	int n = 0; 
	int arr_i = 0;
	int sum = 0;
	scanf("%d",&n);
	int arr[n];
	for( arr_i = 0; arr_i < n; arr_i++){
		scanf("%d",&arr[arr_i]);
		sum = sum + arr[arr_i];
	}
	printf("%d\n",sum);
	return 0;
}
