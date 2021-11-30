#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[10];
	fd = open("LB17.txt",O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
	}

	/////////////
	//0   From Starting position
	//1  From Current Position 
	//2   From end of the file
	lseek(fd,5,0);

    read(fd,Arr,5);
	close(fd);

	printf("Data From file is: \n ");

	write(1,Arr,5);
	printf("\n");


	return 0;
}