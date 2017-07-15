/*open.c*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int fd=-1;

	fd = open("hello.c",O_CREAT | O_TRUNC | O_WRONLY,00600);
	if(fd < 0){
		perror("open:");
		exit(1);
	}
	else
		printf("open file:hello.c %d\n",fd);

	if(close(fd) < 0)
	{
		perror("close:");
		exit(1);
	}
	else
		printf("close file:hello.c\n");
	exit(0);
}
