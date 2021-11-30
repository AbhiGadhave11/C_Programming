#include<stdio.h>

int CountEven(int );   //Function Declaration
//Entry Point Function
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=CountEven(iValue);  //Function Call
	printf("Number of Even Digits is :%d",iRet);
	return 0;

}

int  CountEven(int iNo)  //function Defination
{
	
	int iDigit=0,iCnt=0;
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
          if(iDigit%2==0)
	    {
		iCnt++;
	    }
 
	  iNo=iNo/10;   
	}
	return iCnt;
	
}
