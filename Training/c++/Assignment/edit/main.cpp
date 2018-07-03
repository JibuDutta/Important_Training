#include"header.h"

int main(void)
{

	Student student1("JibanKrishna","Dutta",24,"Bankura","Kolkata",8686721124);
	Student student2("Pritam","Mukherjee",23,"Burdwan","kolkata",9876000345);
	Student student3("Ashis","Bin",24,"Agarpara","Kolkata",9876544234);
	
	Teacher teacher1("BN","Raghuram",35,"RajajiNagar","Bangalore",9897543210);

	Course IntermediateC("Intermediate C++");
	
	IntermediateC.Teacher = &teacher1;

	IntermediateC.Students[0] = &student1;
	IntermediateC.Students[1] = &student2;
	IntermediateC.Students[2] = &student3;

	IntermediateC.Teacher->display();
	
	IntermediateC.Students[0]->display();
    IntermediateC.Students[1]->display();
    IntermediateC.Students[2]->display();
	IntermediateC.Teacher->GradeStudent();
   	
	IntermediateC.display();	

	return 0;
}
