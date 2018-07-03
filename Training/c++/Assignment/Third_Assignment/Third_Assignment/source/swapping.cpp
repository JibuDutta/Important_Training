#include<iostream>
using namespace std;

template<typename Type>
class Number /*Template class*/
{
	private:
			Type num1; /*Data member for swapping*/
			Type num2;
	public:
			Number() /*default constractor*/
			{
				num1 = 0;
				num2 = 0;
			}
			Number(Type a1 ,Type a2) /*Parameterized*/
			{
				num1 = a1 ;
				num2 = a2 ;
			}
			void Swap() /*Swapping the Value*/
			{
				Type temp = num1;
				   	 num1 = num2;
					 num2 = temp;
			}
			void display() /*Display Function*/
			{
				cout << num1 << "	" << num2 <<endl;
			}
};
int main()
{
	Number<int> obj_Integer(11,22); /*Integer object*/
	Number<char> obj_char('S','J'); /*char object*/
	Number<double> obj_Double(78.56,22.34); /*Double object*/
	
	cout <<"Before Swapping Integers are:	";
	obj_Integer.display(); /*Displaying the result*/
	obj_Integer.Swap(); 	/*Swapping the value*/
	cout <<"After Swapping Integers are:	";
	obj_Integer.display();

	cout <<"Before Swapping characters are:	";
	obj_char.display();
	obj_char.Swap();
	cout <<"After Swapping Characters are:	";
	obj_char.display();
	
	cout <<"Before Swapping Doubles are:	";
	obj_Double.display();
	obj_Double.Swap();
	cout <<"After Swapping Doubles are:	";
	obj_Double.display();
	return 0;
}


