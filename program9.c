#include<stdio.h>

void Display(int);
int main()
{
	int iNo=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}
void Display(int iValue)
{
	
	 register int i=0;
	 
	 if(iValue==0)
	 {
		 printf("Your Entered number is 0");
		 return;
	 }
	 if( iValue < 0)
	 {
		 iValue = -iValue;
	 }
	 
	 printf("Displayed numbers are \n");
	for(i=1;i<=iValue;i++)
	{
		printf("%d\n",i);
	}
}