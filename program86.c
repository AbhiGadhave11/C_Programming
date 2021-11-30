#include<stdio.h>

void Display(char *Brr)
{

	printf("Name is %s\n",Brr);
}
 int main()

{
	char Arr[50];

	printf("Enter Your Name\n");
	scanf("%[^'\n']s",Arr);

	printf("Your Entered Name is : %s\n",Arr);

	Display(Arr);

	return 0;

}