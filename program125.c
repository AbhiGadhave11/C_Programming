#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int fd = 0;
    char fname[30];
    char Data[] = "Marvellous Infosystems";

    printf("Enter file name\n");
    scanf("%s",fname);

    fd = creat(fname,0777); 
    if(fd == -1)
    {
    	printf("Unable to allocate file\n");
    }
    else
    {
    	printf("File Successfully Created : %d\n",fd);
    }
    write(fd,Data,15);

	return 0;
}