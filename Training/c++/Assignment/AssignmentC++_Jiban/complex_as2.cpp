#include<iostream>
using namespace std;

class Complex /*complex class*/
{
	int real; /*Data member as Real and Imaginary*/
	int img;

	public:
			Complex(); /*Default Constractor*/

			void getvalue(); /*user input member function*/
			void display(); /*to display the result*/

			Complex operator+(Complex& ob)
			{
				Complex temp; /*temp complex object*/
				temp.real = real + ob.real; /*add real with real*/
				temp.img = img + ob.img;/*add imaginary with imaginary*/
				return temp;
			}
			Complex operator-(Complex& ob)
			{
				Complex temp;
				temp.real = real - ob.real;
				temp.img = img - ob.img;
				return temp;
			}
};
Complex :: Complex() /*constractor*/
{
	real = 0;
	img  = 0;
}
void Complex :: getvalue() /*Definition of the user data input*/
{
	cout <<"Enter The Number:(real part):"<< endl;
	cin >> real ;
	cout <<"Enter The Number:(imaginary part):"<< endl;
	cin >> img;
}
void Complex :: display() /*To Display the Result*/
{
	cout << real;
	if(img > 0)
		cout << "+" ; 
	cout << img <<"i" <<endl;	
}
			
int main()
{
	Complex obj1; /*Complex object*/
	Complex obj2;/*Complex object*/
	Complex result_add;/*Complex object*/
	Complex result_sub;/*Complex object*/
	
	obj1.getvalue(); /*input*/
	obj2.getvalue();

	cout<<"Complex Number1:";
	obj1.display();/*displaying*/
	
	cout <<"Complex Number2:";
	obj2.display();

	result_add = obj1 + obj2; /*Adding two object with operator overloading*/
	result_sub = obj1 - obj2; /*subtraction two object with operator overloading*/


	cout << "After Add:";
	result_add.display();
	cout << "After Sub:";
	result_sub.display();

	return 0;

}
