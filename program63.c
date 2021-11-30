#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iLength)
{
    int iSum = 0,iCnt=0;
    float fResult = 0.0f;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
    	iSum = iSum + Arr[iCnt];
    }
    fResult = (float)iSum / (float)iLength;//Explicit Typecasting
    return fResult;

}

 int main()
 {
 	int iSize=0,iCnt=0;
 	int *ptr = NULL;
 	float fRet=0.0f;
 	printf("Enter the Size of elements\n");
 	scanf("%d",&iSize);
 	ptr = (int *)malloc(sizeof(int)*iSize);

 	if(ptr==NULL)
 	{
       printf("Memory Does Not Allocated\n");
 	}

 	printf("Enter the elements");
   for (iCnt = 0; iCnt <iSize; ++iCnt)
   {
        scanf("%d",&ptr[iCnt]); 
   }

   printf("Entered Data is :\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
   	  printf("%d\n",ptr[iCnt]);
   }
    fRet = Average(ptr,iSize);

    printf("Average is %.2f\n",fRet);

   free(ptr);

 }