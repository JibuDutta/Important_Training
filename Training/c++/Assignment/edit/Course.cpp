#include"Course.h"
void Course :: display()
{
	cout << " CourseName: "<<course_name << endl << endl;
}

Course :: Course()
{
	course_name = new char [12];
	strcpy(course_name,"-Nothing-");

}

Course :: Course(const char *ptr)
{
	course_name = new char[strlen(ptr)+1];
	strcpy(course_name,ptr);
}

Course :: ~Course()
{
//	cout << "Course Destructor"<<endl;
	delete [] course_name;
}

void Course :: getdata()
{

	cout << "Enter the Course Name:" << endl;
	cin >> course_name;

}

