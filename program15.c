#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int);
int main()
{
	int iNo=0;
    bool bRet=false;
    printf("Enter Number\n");
    scanf("%d",&iNo);
	bRet=CheckEven(iNo);
	if(bRet==true)
	{
		printf("%d is a Even Number\n",iNo);
	}
	else
	{
		printf("%d is a not Even Number\n",iNo);
	}
}
bool CheckEven(int iValue)
{
	if((iValue%2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}