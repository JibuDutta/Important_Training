#include<iostream>
using namespace std;
template<typename Type>
void SortArray(Type* ptr,int num)
{
	for(int i = 0; i < num ; i++){
		for(int j = 0 ; j < num - 1 ; j++)
		{
			if(ptr[i] < ptr[j])
			{
				Type temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
template<typename Type>
void Display(Type *ptr ,int num)
{
	for(int i = 0; i < num ;i++) {
			cout << ptr[i] <<" ";
		}
	cout << endl;
}
#define MAX 10
int main()
{
	//int arr[MAX] = {111,22,3,44,55,686,77,8,99,0};
	char arr[MAX] = {'a','d','e','f','g','j','r','d','s','y'};
	SortArray(arr,MAX);
	Display(arr,MAX);

	return 0;
}
