#include<stdio.h>

int Display(int );   //Function Declaration
//Entry Point Function
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=Display(iValue);  //Function Call
	printf("Addition of that number is : %d",iRet);
	return 0;

}

int  Display(int iNo)  //function Defination
{
	
	int iDigit=0,iSum=0;
	if(iNo==0)
	{
		return 1;
	}
	if(iNo<0)  //Updator
	{
		iNo=-iNo;
	}
	while(iNo > 0)
	{
	iDigit=iNo%10;
     iSum=iSum+iDigit;	
 
	iNo=iNo/10;   
	}
	return iSum;
	
}