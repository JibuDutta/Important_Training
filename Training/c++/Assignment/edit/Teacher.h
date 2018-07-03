#include"header.h"
#ifndef TEACHER_H
#define TEACHER_H
class Teacher  
{
	private :
		char *first_name;
		char *last_name;
		int  age;
		char *address;
		char *city;
		long int phone_no;

	
	public:
		Teacher();
		
		Teacher(const char *first,const char *last, int a,const char *add, const char *ci,long int ph);
		
		~Teacher();

		void getdata();
		
		void display();

		void GradeStudent();
		void SitInClass();
};
#endif
