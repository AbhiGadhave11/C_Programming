#include<stdio.h>

int Reverse(int);

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
	
	printf("Reverse Number is : %d",iRet);
	return 0;
}

int Reverse(int iNo)
{
	int iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		iRev= (iRev*10) + iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
