#include <stdio.h>
#include <fcntl.h>

int main()
{

	int fd;
	
	fd = open("/dev/myChar", O_RDWR);
	
	if (fd < 0)
		perror("Unable to open the device\n");
	else
		printf("FILE Open Successfully %d\n",fd);

		ioctl( fd, getpid(), 65 );

	close(fd);

	return 0;
}
