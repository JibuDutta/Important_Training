#include"header.h"
int main(void)
{
	int fd;
	char wrbuf[100];
	if (mkfifo("fifo1",0660) == -1)
	{
		perror("Fifo");
		return;
	}	
	
	fd = open("fifo1",O_RDWR);
	while(1)
	{
		printf("Enter the message:\n");
		fgets(wrbuf,100,stdin);

		write(fd,wrbuf,strlen(wrbuf)+1);
		printf("Send the data: %s",wrbuf);
	}
		
	close(fd);

	return 0;
}
