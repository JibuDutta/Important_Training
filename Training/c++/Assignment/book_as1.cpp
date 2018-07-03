#include<iostream>
using namespace std;

class BOOK /*Book class*/
{
	private:
			int n; /*Data Member*/
			int BOOK_NO;
			char BOOK_TITLE[20];
			float PRICE;
			void Total_Cost(int n) /*Member Function*/
			{
				cout <<"============================"<<endl;
				cout <<"	BOOK_INFO"<< endl;
			   	cout <<"============================"<<endl;
				cout <<" BookNo:" << BOOK_NO << endl <<" BookTitle: "<< BOOK_TITLE << endl;
				cout <<" Total cost for "<< n <<" copies INR:"<< PRICE*n <<endl;
			}
	public:
			void Input(); /*Usr Input Member Function*/
			void Purchase();/*User Input Member Function*/
			
};

void BOOK :: Input() /*Member Function Definition*/
{
	cout << "Enter The Book No:";
	cin >> BOOK_NO;
	cout << "Enter Title of the Book:";
	cin >> BOOK_TITLE;
	cout << "Enter the Price:(Per Copy in INR:) ";
	cin >>PRICE ;
}
void BOOK :: Purchase() /*Member Function Definition*/
{
	cout <<"Number of Copy:";
	cin >> n;
	Total_Cost(n);
}
			
int main()
{
	BOOK b1; /*object creating*/
	
	b1.Input();/*calling our member funtion*/

	b1.Purchase();/*calling our member funtion*/


	return 0;
}
