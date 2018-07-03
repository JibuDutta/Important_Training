#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>



int counter = 0;

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void* message_fun(void *ptr)
{
	/*char *message ;
	message = (char*)ptr;
	*/

	pthread_mutex_lock(&mutex1);
	counter++;
	printf("%d\n",counter);
	pthread_mutex_unlock(&mutex1);
}

int main()
{
	pthread_t thread1;
	pthread_t thread2;

	//const char* message1 = "SanTU";
	//const char* message2 = "JeevaN";
	

	if(pthread_create(&thread1, NULL, message_fun, NULL)  != 0)
	{
		perror("Thread creation failed\n");
		exit(0);
	}

	if(pthread_create(&thread2, NULL ,message_fun , NULL) != 0)
	{
		perror("Thread creation failed\n");
		exit(0);
	}

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	return 0;
}
