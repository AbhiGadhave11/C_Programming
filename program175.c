#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	
	fd = open("LB17.txt",O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
	}

	
	lseek(fd,10,2);

    //read(fd,Arr,5);
	
	write(fd,"*",1);
	//printf("\n");
	
	close(fd);
    return 0;
}
