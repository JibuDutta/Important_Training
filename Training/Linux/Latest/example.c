#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
char a = 'A';
char b = 'a';
int no = 0;
void* thread1(void *arg)
{

	pthread_mutex_lock(&mutex);
	printf("Upper %c\n", a);	
	pthread_mutex_unlock(&mutex);

	pthread_exit(NULL);
}
void* thread2(void *arg)
{

	pthread_mutex_lock(&mutex);
	printf("Upper %c\n", a);	
	pthread_mutex_unlock(&mutex);
	
	pthread_exit(NULL);
}
void* thread3(void *arg)
{

	pthread_mutex_lock(&mutex);
	
	printf("Upper %c\n", a);	
	
	pthread_mutex_unlock(&mutex);
	
	pthread_exit(NULL);
}
int main()
{	
	pthread_t th1;
	pthread_t th2;
	pthread_t th3;

	pthread_create(&th1, NULL,thread1,NULL );
	pthread_create(&th2, NULL,thread2,NULL );
	pthread_create(&th3, NULL,thread3,NULL );

	pthread_join(th1,NULL);
	pthread_join(th2,NULL);
	pthread_join(th3,NULL);

	return 0;
}
