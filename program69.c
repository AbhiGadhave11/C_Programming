#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
     int i=0,cnt=0,iBig=0;
     iBig = Arr[0];
     
     for(i=0;i<iSize;i++)
     {
          if(iBig<Arr[i])
          {
               iBig = Arr[i];
          }
     }
     return iBig;
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
    iRet = Maximum(ptr,iLength);

    printf("Maximum Number is : %d\n",iRet);

   free(ptr);

 }