#include"header.h"
void *f1(void* p1)
{
	printf("In f1\n");
	sleep(4);
	printf("In f1 After sleep\n");	
}
void *f2(void* p2)
{
	printf("In f2\n");
	printf("In f2 After sleep\n");	

}
pthread_t  tid1,tid2;
int main(void)
{
	pthread_create( &tid1 , NULL , f1 , NULL);
	pthread_create( &tid2, NULL , f2 , NULL);

	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);

//	pthread_exit(0);
}
