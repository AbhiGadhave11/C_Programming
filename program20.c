#include<stdio.h>

void Display();   //Function Declaration
//Entry Point Function
int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	Display(iValue);  //Function Call
	
	return 0;

}

void Display(int iNo)  //function Defination
{
	// int iNo=7521;
	int iDigit=0;
	while(iNo > 0)
	{
	iDigit=iNo%10;  
	printf("%d\n",iDigit);  
	iNo=iNo/10;   
	}
	
}