#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{

   int fd = 0;
   char Fname[30];

   printf("Enter File Name");
   scanf("%s",Fname);

   fd = creat(Fname,0777);

    if(fd == -1)
    {
    	printf("Unable created file\n");
    }
    else
    {
    	printf("File Gets Successfully created\n");
    }
	return 0;
}