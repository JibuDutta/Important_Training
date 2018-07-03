#ifndef COURSE_H
#define COURSE_H
#include"Student.h"
class Course : public Student, public Teacher
{
	public:
		char *course_name; /*Datamember */
		Student *Students[3];/* Array of 3 Student*/
		Teacher *Teacher; /*Teacher*/
		
			
	public:
		Course(); /*constractor*/
		Course(const char *ptr); /*Parameterized constarctor*/
		~Course();	/*Destractor*/
		void getdata();/*Method for User Data*/
		void display(); /*Display Method*/
};
void Course :: display() /*Display Method*/
{
	cout << "=========================================" << endl;
	cout << "		CourseInfo" << endl;
	cout << "=========================================" << endl;
	cout << " CourseName: "<<course_name << endl << endl;
}

Course :: Course() /*Constractor function*/
{
	course_name = new char [12]; /*Dynamically allocating memory for name*/
	strcpy(course_name,"-Nothing-");

}

Course :: Course(const char *ptr) /*Parameterized Constractor*/
{
	course_name = new char[strlen(ptr)+1]; /*Dynamically*/
	strcpy(course_name,ptr);
}

Course :: ~Course() /*Destractor function*/
{
//	cout << "Course Destructor"<<endl;
	delete [] course_name; /*Deallocating Memory*/
}

void Course :: getdata() /*Member Function for User Data*/
{

	cout << "Enter the Course Name:" << endl;
	cin >> course_name;

}

#endif
