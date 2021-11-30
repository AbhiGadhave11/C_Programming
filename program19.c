#include<stdio.h>

void Display();   //Function Declaration
//Entry Point Function
int main()
{
	Display();  //Function Call
	
	return 0;

}

void Display()  //function Defination
{
	int iNo=7521;
	int iDigit=0;
	while(iNo > 0)
	{
	iDigit=iNo%10;  
	printf("%d\n",iDigit);  
	iNo=iNo/10;   
	}
	
}