#include"header.h"

#define BUFFER_SIZE 25
#define READ_END 0
#define WRITE_END 1

int main(void)
{
	char write_msg[BUFFER_SIZE] ;
	char read_msg[BUFFER_SIZE] ;
	
	int fd[2];

	pid_t pid;

	if(pipe(fd) == -1) { /* Create the Pipe */
		perror("PIPE FAILED\n"); /* If failed*/
		return;
	}

	pid = fork(); /*creating Child process */
	
	if(pid < 0) {
		perror("FORK FAILED\n");
		return;
	}

	else if (pid > 0) {/*parent */
		
		close(fd[READ_END]) ;/*Closing the reading end*/
		
		/* write to the pipe */
		printf("ENTER THE MESSAGE:\n");
		fgets(write_msg,BUFFER_SIZE,stdin);

		write(fd[WRITE_END],write_msg,strlen(write_msg)+1);

		close(fd[WRITE_END]) ;/*closing the writing end */
	}

	else {/*child process*/

		close(fd[WRITE_END]);/*close the write end*/

		read(fd[READ_END], read_msg , BUFFER_SIZE);
		printf("Read %s",read_msg);

		close(fd[READ_END]);
	}




	return 0;
}
