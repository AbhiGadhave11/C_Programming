#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fdsrc = 0,iRet=0,fddest=0;
	char Fname1[30];
	char Fname2[30];
	char Buffer[1024];   //Mug

	printf("Enter source File Name\n");
	scanf("%s",Fname1);

	fdsrc = open(Fname1,O_RDONLY);

	if(fdsrc == -1)
	{
		printf("Unable to open the file \n");
	    return -1;  //return to OS
	}
	else
	{
		printf("File Succesfully Opened with FD :%d\n",fdsrc);
	}

    printf("Enter Destination File Name : \n");
    scanf("%s",Fname2);

    fddest = creat(Fname2,0777);

	
	
	while((iRet = read(fdsrc,Buffer,sizeof(Buffer)))!=0)
	{
       write(fddest,Buffer,iRet);   
	}
 
	close(fdsrc);
	close(fddest);

    return 0;
}	