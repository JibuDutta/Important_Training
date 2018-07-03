#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>                                                          
#include <sys/ipc.h>                                                            
#include <sys/shm.h> 


int main()
{
	int shm_id;

	key_t key;

	key = ftok("file",10);

	shm_id = shmget(key, 1024, IPC_CREAT | 0666);

	char* ptr = (char*)shmat(shm_id , NULL , 0);
	
	printf("Enter the message:");
	fgets(ptr,sizeof(ptr),stdin);

//	ptr = "Jiban Krishna Dutta";
	printf("message sent successfully:%s\n",ptr);
	
	shmdt(ptr);

	return 0;
}
