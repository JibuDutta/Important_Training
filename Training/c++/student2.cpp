#include<iostream>
using namespace std;
struct Student
{
	int rollno;
	int marks;
	void setData()
   	{
		cout <<"Enter roll no:";
		cin >>rollno;
		cout <<"Enter Marks:";
		cin >> marks;
	}
	void display()
	{
		cout<<rollno<< " "<<marks<<endl;
	}

};
int main()
{
	Student s1;
	//	s1.marks = 0;
	//	s1.rollno = 1;

//	setData(&s1);
//	display(&s1);

	s1.setData();
	s1.display();
	return 0;
}
