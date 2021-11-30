#include<stdio.h>
#include<stdbool.h>


bool ChkBit(int iNo)
{
   int iResult  = 0;
   int iMask = 8;
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
	int iValue=0;
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