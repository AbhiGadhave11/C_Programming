#include <stdio.h>
#include<stdlib.h>


int LastOccurence(int Arr[],int iSize,int iNo)
{
     int i=0;
     
    for(i=(iSize-1);i>=0;i--)
     {
        if(Arr[i]==iNo)
        {
          break;
        }         
     }
     
   return i;
}
int main()
 {
 	int iLength=0,iCnt=0,iRet=0,iValue=0;
     
 	int *ptr = NULL;
 	
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

   printf("Enter the Search Elements");
    scanf("%d",&iValue);
   
    iRet = LastOccurence(ptr,iLength,iValue);
   
    if(iRet==-1)
    {
    printf("There is no such Number\n");
    }

    else
    {
     printf("Number is at index : %d \n",iRet);
    }

   free(ptr);

 }