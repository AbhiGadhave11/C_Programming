#include<stdio.h>
typedef unsigned long int  UINT;
UINT Factorial(int);   //Declaration
int main()
{
	int iNo=0;
	UINT iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	printf("Factorial is :%d",iRet);
	
	return 0;
}

UINT Factorial(int iValue)
{
	UINT iFact=1;
	int iCnt=0;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}