#include<stdio.h>
#pragma pack(1)
struct student
{
int roll;
char name[20];
float marks;

}STUDENT;

struct DOB
{
int date:5;
int month;
int year;


}dob;

int main()
{
printf("SIZEOF THE STRUCTURE: %d\n",sizeof(struct student));
printf("SIZEOF THE STRUCTURE: %d\n",sizeof(struct DOB));
return 0;
}
