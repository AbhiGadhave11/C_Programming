// 4.Write a program which accept number from user 
// and count frequency of 4 in it.
// Input : 2395
// Output : 0
// Input : 1018
// Output : 0
// Input : 9440
// Output : 2
// Input : 922432
// Output : 1

#include<stdio.h>
int CountFour(int iNo)
{
 int iDigit=0,iCnt=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		// printf("%d\n",iDigit);
		if(iDigit==4)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
   int iValue = 0;
   int iRet = 0;
   printf("Enter number\n");
   scanf("%d",&iValue);
   iRet = CountFour(iValue);
   printf("%d",iRet);
  return 0;
}