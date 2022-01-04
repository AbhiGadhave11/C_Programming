// 4.Write a program which accept range from user 
// and return addition of all even numbers in between that 
// range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 108
// Input : 10 18
// Output : 70
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range

#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
int iCnt = 0,iSum = 0;
	
	
     for(iCnt = iStart;iCnt<=iEnd;iCnt++)
	 {
		 if(iCnt % 2 == 0)
		 {
		 iSum = iSum + iCnt;
		 }
	 }
	 return iSum;
}
int main()
{
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);

if(iValue1>iValue2)
	{
		printf("Invalid Range\n ");
		return 0;
	}
	if(iValue1<0||iValue2<0)
	{
		printf("Invalid Range\n");
		return 0;
	}
iRet = RangeSumEven(iValue1, iValue2);
printf("Addition is %d",iRet);
return 0;
}