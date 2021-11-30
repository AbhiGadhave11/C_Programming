#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
   UINT iResult  = 0;
   UINT iMask = 0x0000000f;
   iResult = iNo & iMask;
   if(iResult==iMask)
   {
   	return true;
   }
   else
   {
   	return false;
   }
}
int main()
{
	UINT iValue=0;
	bool bret=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	bret = ChkBit(iValue);

	if(bret == true)
	{
		printf("4th bit is on\n");
	}
	else
	{
		printf("4th bit is off\n");
	}
	return 0;
}