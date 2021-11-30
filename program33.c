#include<stdio.h>
#include<stdbool.h>
int power(int,int);
int main()
{
	int iBase=0,iPower=0,iRet=0;
	
	printf("Enter Base\n");
	scanf("%d",&iBase);
	printf("Enter Power\n");
	scanf("%d",&iPower);
	iRet=power(iBase,iPower);
	printf("%d\n",iRet);
	return 0;
}	

int power(int x,int y)
{
	int iCnt=0,iAns=1;
	if(x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
	for(iCnt=1;iCnt<=y;iCnt++)
	{
		iAns=iAns*x;
	}
	return iAns;
}
