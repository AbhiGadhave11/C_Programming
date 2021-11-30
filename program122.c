#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int Fd = 0;

	Fd = creat("Amruta.txt",0777);

	if(Fd == -1)
	{
		printf("File Does not created\n");
	}
	else
	{
		printf("File gets Successfully Created\n");
	}
	return 0;
}