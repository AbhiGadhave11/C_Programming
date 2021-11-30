#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int fd = 0;
	char fname[30];
	printf("Enter File Name\n");
	scanf("%s",fname);
	
	fd = creat(fname,0777);
	if(fd == -1)
	{
		printf("Unable to allocate file\n");
	}

	else
	{
		printf("File Created : %d",fd);
	}

	return 0;
}