#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int);

int main()
{
	int iValue=0,bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPalindrome(iValue);
	
	if(bRet==true)
	{
		printf("%d is Palindrome Number\n",iValue);
	}
	else
	{
		printf("%d is Not Palindrome Number\n",iValue);
	}
	return 0;
}

bool CheckPalindrome(int iNo)
{
	int iDigit=0,iRev=0,iTemp=0;
	iTemp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		iRev= (iRev*10) + iDigit;
		iNo=iNo/10;
	}
	if(iTemp == iRev)
	{
		return true;
	}
	else
	{
		return false;
	}
}
