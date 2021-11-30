#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
     int i=0,cnt=0,iSmall=0;
     iSmall = Arr[0];
     
     for(i=0;i<iSize;i++)  
     {
          if(iSmall>Arr[i])
          {
               iSmall = Arr[i];
          }
     }
     return iSmall;
}
int main()
 {
 	int iLength=0,iCnt=0,iRet=0;
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
    iRet = Minimum(ptr,iLength);

    printf("Minimum Number is : %d\n",iRet);

   free(ptr);

 }