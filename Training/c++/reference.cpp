#include<iostream>
using namespace std;
void SwapData(int& a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int& GetSquare(int& x)
{
	x = x * x;
	return x;
}
int main()
{
	int x = 10;
	int y = 20;
	int a = 2;

	cout<<GetSquare(a)<<endl;
	int z = GetSquare(a);
	cout << z << endl;

	SwapData(x,y);

	cout<<" x:"<< x <<" y:"<<y<<endl;
	return 0;
}
