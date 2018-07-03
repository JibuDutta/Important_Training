#include<iostream>
using namespace std;
class Student
{
	private:	
			int rollno;
			int marks;
	
	public:
	void setData()
   	{
		cout <<"Enter roll no:";
		cin >>rollno;
		cout <<"Enter Marks:";
		cin >> marks;
	}
	void display()
	{
		cout<<"RollNo:"<<rollno<< " "<<"Marks:"<<marks<<endl;
	}

};
int main()
{
	Student s1;
//		s1.marks = 0;
	//	s1.rollno = 1;

//	setData(&s1);
//	display(&s1);

	s1.setData();
	s1.display();
	return 0;
}
