#define MAX 10
#include<iostream>

using namespace std;
template <typename Type>
class MyStack
{
	private:
		Type arr[MAX];
		int index;
	public:
		MyStack();
		void Push(Type element);
		Type Pop();
		Type Top();
};
template<typename Type>
MyStack<Type>::MyStack()
{
	cout <<"Initializing index " << endl;
	index = -1;

}

template<typename Type>
void MyStack<Type> :: Push(Type element)
{
	if(index < MAX)
	{
		arr[++index] = element;
	}
}

template<typename Type>
Type MyStack<Type> :: Pop()
{
	if(index >=0)
	{
		Type i = arr[index];
		index--;
		return i;
	}
}

template<typename Type>
Type MyStack<Type> :: Top()
{
	if(index >= 0 )
	{
		return arr[index];
	}
}
int main()
{
	MyStack<int> ob;
	ob.Push(10);
	ob.Push(22);
	ob.Top();
}
