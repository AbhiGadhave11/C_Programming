#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CntEven(int Arr[],int iSize)
{
     int i=0;
     for(i=0;i<iSize;i++)
     {
        if(Arr[i]==11)
        {
          return true;
        }         
     
     }
     return false;
     
}
int main()
 {
 	int iLength=0,iCnt=0,iRet=0;
     bool bRet=false;
 	int *ptr = NULL;
 	//float fRet=0.0f;
 	printf("Enter the Size of elements\n");
 	scanf("%d",&iLength);
 	ptr = (int *)malloc(sizeof(int)*iLength);

 	if(ptr==NULL)
 	{
       printf("Memory Does Not Allocated\n");
 	}

 	printf("Enter the elements");
   for (iCnt = 0; iCnt <iLength; ++iCnt)
   {
        scanf("%d",&ptr[iCnt]); 
   }

   printf("Entered Data is :\n");
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
   	  printf("%d\n",ptr[iCnt]);
   }
   
    bRet = CntEven(ptr,iLength);
   
    if(bRet==true)
    {
    printf("Number is Not Present\n");
    }

    else
    {
     printf("Number is not present\n");
    }

   free(ptr);

 }