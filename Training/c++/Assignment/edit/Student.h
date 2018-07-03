#include"header.h"
#ifndef STUDENT_H
#define STUDENT_H
class Student 
{
	private:
		char *first_name;
		char *last_name;
		int  age;
		char *address;
		char *city;
		long int phone_no;

	
	public:
		Student();
		Student (const char *p,const char *q,int a,const char *add, const char *ci,long int ph);
		~Student();
		void getdata();
		void display();

		void SitInClass();
};

#endif
