#include<iostream>
using namespace std;
class Student
{
	private:	
			int rollno;
			int marks;
	
	public: 
		void display();
		void setData();

};
void Student :: setData()
{
	cout <<"Enter roll no:";
	cin >>rollno;
	cout <<"Enter Marks:";
	cin >> marks;
}
void Student :: display()
{
	cout<<"RollNo:"<<rollno<< " "<<"Marks:"<<marks<<endl;
}
# if 0
int main()
{
	Student s1;
	
	s1.setData();
	s1.display();
	return 0;
}
#endif
#if 0
int x = 10;
int main()
{
	int x = 3;
	cout<<x<<endl;
	cout<<::x<<endl;
	return 0;
}

#endif

int fun(int x = 1)
{
	cout << x <<endl;
}

int main()
{
	fun(10);
	fun();
	return 0;
}
