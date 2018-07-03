#include"header.h"
#ifndef COURSE_H
#define COURSE_H
class Course : public Student , public Teacher
{
	public:
		char *course_name;
		Student *Students[3];
		Teacher *Teacher;
		
			
	public:
		Course();
		Course(const char *ptr);
		~Course();	
		virtual void getdata();
		void display();
};

#endif
