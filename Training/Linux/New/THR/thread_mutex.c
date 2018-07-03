#include"header.h"
int v = 1;
void* f1(void *p1)
{
	printf("In thread1\n");
	sleep(2);
	printf("In thread1 : v = %d:\n ",v);
	
	sleep(5);
	v = v+10;
	printf("In thread1(v = v + 10) : v = %d:\n",v);
	printf("Exiting Thread\n");
	
	pthread_exit(0);
}
void* f2(void *p2)
{
	printf("In thread2\n");
	sleep(2);
	printf("In thread2 : v = %d:\n ",v);
	
	sleep(2);
	v = v+15;
	printf("In thread1(v = v + 15) : v = %d:\n",v);
	printf("Exiting Thread\n");
	pthread_exit(0);
	

}
pthread_t tid1,tid2;

int main(void)
{
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);

	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
}
