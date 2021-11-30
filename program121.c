#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo,int iPos)
{
   UINT iResult  = 0;
   UINT iMask = 0x00000001;
   iMask = iMask<<(iPos-1);
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
	UINT iValue=0,iBit=0;;
	bool bret=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);

   printf("Enter Position\n");
   scanf("%d",&iBit);

	bret = ChkBit(iValue,iBit);

	if(bret == true)
	{
		printf(" Bit is on\n");
	}
	else
	{
		printf(" bit is off\n");
	}
	return 0;
}