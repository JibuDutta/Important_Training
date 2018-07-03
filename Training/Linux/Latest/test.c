#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
long long int sum = 0; 
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void* thread(void *arg)
{
	int i ;

	pthread_mutex_lock(&mutex);

	for(i = 0 ;i < 500000000; i++)
		sum = sum + i;

	pthread_mutex_unlock(&mutex);

	printf("sum = %lld\n", sum);
	
	pthread_exit(NULL);
}


int main()
{	
	pthread_t th1;
	pthread_t th2;

	pthread_create(&th1, NULL,thread,NULL );
	pthread_create(&th2, NULL,thread,NULL );

	pthread_join(th1,NULL);
	pthread_join(th2,NULL);

	return 0;
}
