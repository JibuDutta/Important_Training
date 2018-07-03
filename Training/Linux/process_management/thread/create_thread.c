#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


void * fun(void *p1);
void * thread_function ( void *p);

int A = 10;

int main(void)
{
	int status;
	pthread_t th_id;

	status = pthread_create ( &th_id , NULL, thread_function , NULL);

	if(status !=0)
	{
		printf("thread creation failed\n");
		return;
	}
	
	printf("PID =  %d\n",getpid());

	getchar();
	printf("The Value of A = %d\n",A);

	pthread_exit(NULL);

	return 0;
}
void * thread_function ( void *p)
{
	printf("I AM IN THREAD FUNCTION\n");
	
	printf("PID =  %d\n",getpid());

	A = A + 20;

	pthread_t th_id2;
	
	int s;

	s = pthread_create(&th_id2,NULL,fun,NULL);
	if(s!=0)
	{
		printf("creation failed\n");
		return ;
	}

	pthread_exit(NULL);
	getchar();

	return NULL;

}

void * fun(void *p1)
{
	printf("In thread 2\n");
	return NULL;
}
