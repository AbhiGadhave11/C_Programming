#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int);
int SumFactor(int);

int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	if(iValue==0)
	{
		printf("0 is not a perfect Number\n");
		return 0;
	}
	bRet=CheckPerfect(iValue);
	if(bRet==true)
	{
		printf("%d is a Perfect Number\n",iValue);
	}
	else
	{
		printf("%d is  Not a Perfect Number\n",iValue);
	}
	return 0;
}
bool CheckPerfect(int iInput)
{
	int iNumber=0;
	if(iInput<0)
	{
		iInput = -iInput;
	}
	iNumber=SumFactor(iInput);
	if(iNumber==iInput)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SumFactor(int iNo)
{
	int iSum=0,iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if(iNo%iCnt==0)
		{
			// printf("%d\n",iCnt);
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}