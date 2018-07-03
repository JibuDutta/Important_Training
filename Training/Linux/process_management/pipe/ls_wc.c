#include"header.h"
int main(void)
{
	int fd[2];
	 pipe(fd);

	if(fork())
	{
		close(0);
		dup(fd[0]);
		close(fd[1]);
		execlp("wc","wc",NULL);
	}
	else
	{
		close(1);
		dup(fd[1]);
		close(fd[0]);
		execlp("ls","ls",NULL);
	}

	return 0;

}
