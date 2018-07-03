#include"header.h"
pthread_mutex_t m1;
int v = 1;
void* f1(void *p1)
{
	printf("In thread1\n");
	printf("In thread1 : v = %d:\n ",v);
	pthread_mutex_lock(&m1);
	int i;
	for(i = 0; i < 100000; i++)
	 v = v+1;
	
	printf("In thread1(v = v + 10) : v = %d:\n",v);
	pthread_mutex_unlock(&m1);
	
	printf("Exiting Thread\n");
	pthread_exit(0);
}
void* f2(void *p2)
{
	printf("In thread2\n");
	printf("In thread2 : v = %d:\n ",v);
	
	pthread_mutex_lock(&m1);
	
//	pthread_mutex_lock(&m1);
	int i;
	for(i = 0; i < 100000; i++)
		v = v+2;
	printf("In thread1(v = v + 15) : v = %d:\n",v);
	
	pthread_mutex_unlock(&m1);
	
	printf("Exiting Thread\n");
	pthread_exit(0);
	

}
pthread_t tid1,tid2;

int main(void)
{
//	pthread_mutex_init(&m1,NULL);

	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);

	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
}
