/*2. Accept N numbers from user and return 
difference between frequency of even number
  and odd numbers.
Input : N : 7

Elements :85 66 3 80 93 88 90

Output : 1 (4 -3)
Program Layout : */

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
    int iCnt = 0,eCnt=0,oCnt=0;
    //printf("Count of Numbers Which are Even\n");
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
  	  if((Arr[iCnt]%2==0))
   	  {
  		  eCnt++;
  	   }

  	   else
  	   {
  	   	oCnt++;
  	   }


  }
  return eCnt-oCnt;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
     {
       printf("Unable to allocate memory");
       return -1;
      }
    
     printf("Enter %d elements\n ",iSize);
   
    for(iCnt = 0;iCnt<iSize; iCnt++)
     {
         printf("Enter element : %d\n",iCnt+1);
         scanf("%d",&p[iCnt]);

     }
    
    iRet = Frequency(p, iSize);
    
    printf("%d\n",iRet);
    
    free(p);
    
    return 0;
}