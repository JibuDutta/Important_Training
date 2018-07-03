#include<iostream>
using namespace std;
struct Student
{
	int rollno;
	int marks;
};

void setData(Student *ptr)
{
	cout <<"Enter roll no:";
	cin >>ptr->rollno;
	cout <<"Enter Marks:";
	cin >>ptr->marks;
}
void display(Student *ptr)
{
	cout<<ptr->rollno<< " "<<ptr->marks<<endl; 

}
int main()
{
	Student s1;
//	s1.marks = 0;
//	s1.rollno = 1;
	
	setData(&s1);
	display(&s1);
	return 0;
}
