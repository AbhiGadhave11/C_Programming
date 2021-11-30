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
	
	iDigit=iNo%10;  //1
	printf("%d\n",iDigit);
	iNo=iNo/10;   //752
	
	iDigit=iNo%10;   //2
	printf("%d\n",iDigit); //2
	iNo=iNo/10;     //75
	
	iDigit=iNo%10;
	printf("%d\n",iDigit);//5
	iNo=iNo/10;    //7
	
	iDigit=iNo%10;  //7
	printf("%d\n",iDigit);
	iNo=iNo/10;
}