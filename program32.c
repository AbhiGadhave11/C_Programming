#include<stdio.h>
#include<stdbool.h>
int DisplayTable(int);
int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	DisplayTable(iValue);
	return 0;
}	

/*int DisplayTable(int iNo)
{
	register int iCnt=0;
	printf("Table of %d is :",iNo);
	printf("\n");
	if(iNo<0)
	{
		iNo = -iNo;
	}
	if(iNo==0)
	{
		printf("0");
	}
	for(iCnt=1;iCnt<=(iNo*10);iCnt++)
	{
		if(iCnt%iNo==0)
		{
			printf("%d\n",iCnt);
		}
	}
}*/


   int DisplayTable(int iNo)
   {
      
      register int icnt=0;
      if(iNo < 0)
      {
         iNo = -iNo;
      }
      
      if(iNo == 0)
      {
         printf("0");
         return 0;
      }
      printf("Table of %d is :",iNo);
     printf("\n");
     for(iCnt=1;iCnt<=10;iCnt++)
	 {
		 printf("%d\n",iNo*iCnt);
	 }		 
   }

