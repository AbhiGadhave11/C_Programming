#include<stdio.h>

int SumEven(int );   //Function Declaration
//Entry Point Function
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=SumEven(iValue);  //Function Call
	printf("Sum of Number of Even Digits is :%d",iRet);
	return 0;

}

int  SumEven(int iNo)  //function Defination
{
	
	int iDigit=0,iSum=0;
	
	if(iNo<0)  //Updator
	{
		iNo=-iNo;
	}
	while(iNo > 0)
	{
	iDigit=iNo%10;
    if(iDigit%2==0)
	{
		iSum=iSum+iDigit;
	}
 
	iNo=iNo/10;   
	}
	return iSum;
	
}