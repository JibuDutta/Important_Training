#include<iostream>
using namespace std;
template <typename Type>
Type find_min(Type* ptr,int num) /*template function definition*/
{
	for( int i = 0; i < num; i++)
	{
		for(int j = 0 ; j < num - 1; j++)
		{
			if(ptr[i] < ptr[j])
			{
				Type temp = ptr[i]; /*toSwapping*/
				  ptr[i] = ptr[j];
				  ptr[j] = temp;
			}
		}
	}
	return ptr[0];

}

#define MAX 10
int main()
{
	int integer_arr[MAX]; /*Integer Array*/
	char ch_arr[MAX]; 	  /*character Array*/
	double d_arr[MAX];	/*Double Array*/

	cout <<"Enter the elements :"<<endl; /* User Input*/
	for(int i = 0 ; i < MAX ; i++){
		cin >>integer_arr[i];
	}

	cout <<"Enter the chararcters :"<<endl;/* User Input*/
	for(int i = 0 ; i < MAX ; i++){
		cin >>ch_arr[i];
	}
	cout <<"Enter the Double elements :"<<endl;/* User Input*/
	for(int i = 0 ; i < MAX ; i++){
		cin >>d_arr[i];
	}
	
	cout<<"Integer Elements are:"<<endl; /*To display*/
	for(int i = 0 ; i < MAX ; i++){
		cout << integer_arr[i] <<"	";
	}
	cout <<endl;
	
	cout<<"Character Elements are:"<<endl;/*To display*/
	for(int i = 0 ; i < MAX ; i++){
		cout << ch_arr[i] <<"	";
	}
	cout <<endl;
	
	
	cout<<"Double Elements are:"<<endl;/*To display*/
	for(int i = 0 ; i < MAX ; i++){
		cout << d_arr[i] <<"	";
	}
	cout <<endl;


	cout << "Smallest Element in Integer array: "<< find_min(integer_arr,MAX) <<endl; /*template function call to find min*/
	cout << "Smallest Element in character array: "<< find_min(ch_arr,MAX) <<endl;
	cout << "Smallest Element in Double array: "<< find_min(d_arr,MAX) <<endl;
	return 0 ;

}
