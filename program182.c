#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd=0,iCnt=0,iRet=0,i=0,iSum = 0;
   char fname[20];
   char Buffer[10];

    printf("Enter File Name\n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);
     if(fd == -1)
     {
      printf("Unable open file\n");
      return -1;
     }

     while((iRet=read(fd,Buffer,10))!=0)
     {
        iSum = iSum + iRet;
     }     
  
     printf("Number of Byres : %d\n",iSum);
  close(fd);
    
    return 0;
}