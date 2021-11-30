#include<stdio.h>

int Display(int );   //Function Declaration
//Entry Point Function
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=Display(iValue);  //Function Call
	printf("TOtal Number of Digits is : %d",iRet);
	return 0;

}

int  Display(int iNo)
{
	
	int iDigit=0,iCnt=0;
	while(iNo > 0)
	{
	iDigit=iNo%10;
        iCnt=iCnt+1;	
 
	iNo=iNo/10;   
	}
	return iCnt;
	
}
