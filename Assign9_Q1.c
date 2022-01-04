// 1. Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E
// Program Layout :

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0,iTemp = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	if(iNo>0&&iNo<=26)
	{
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		
		iTemp = iCnt;
		iTemp = iTemp +64;
		printf("%c \t",iTemp);
		
		
	}
	}
	else
	{
		printf("Please Enter Valid Number\n");
	}
}
int main()
{
int iValue = 0;

printf("Enter number of elements");
scanf("%d",&iValue);

Pattern(iValue);
return 0;
}