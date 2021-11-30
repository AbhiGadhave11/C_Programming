#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet=0;
	char Fname[30];
	char Data[] = "Marvellous Infosystems";

	printf("Enter File Name\n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file \n");
	    return -1;  //return to OS
	}
	else
	{
		printf("File Succesfully Opened with FD :%d\n",fd);
	}
	iRet = write(fd,Data,10);

	printf("%d bytes gets Succesfully written in the file\n",iRet);
	
	return 0;
}