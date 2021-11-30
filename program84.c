#include<stdio.h>


 int main()
{
	char Arr[50];

	printf("Enter Your Name\n");
	scanf("%[^'\n']s",Arr);

	printf("Your Entered Name is : %s\n",Arr);

	

	return 0;

}