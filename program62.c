#include<stdio.h>
#include<stdlib.h>

int Addition(int Brr[],int iSize)
{
	int iCnt =0,iSum=0;
	 for(iCnt=0;iCnt<iSize;iCnt++)
    {
		iSum = iSum + Brr[iCnt];
	}
	return iSum;
}
int main()
{
	int *Arr = NULL;    
    int iSum = 0,iCnt=0,iRet = 0,iLength=0;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	Arr = (int*) malloc(iLength*sizeof(int));
    
	printf("Enter Numbers\n");
	 for(iCnt=0;iCnt<iLength;iCnt++)
	 {
		 scanf("%d",&Arr[iCnt]);
	}
	
  iRet = Addition(Arr,iLength);
     printf("Addition is : %d",iRet);
   free(Arr); 	 
	return 0;
}