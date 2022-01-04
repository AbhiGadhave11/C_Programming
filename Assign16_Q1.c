//1. Accept N numbers from user and return 
//difference between summation of even elements and 
//summation of odd elements.
//Input : N : 6

//Elements :85 66 3 80 93 88

//Output : 53 (234 - 181)
//Program Layout :

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
 int iCnt=0,eSum=0,oSum=0;
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
 	//printf("%d\n",Arr[iCnt]);
 	if(Arr[iCnt]%2==0)
 	{
 		//printf("Even : %d\n",Arr[iCnt]);
 		eSum = eSum+Arr[iCnt];
 	}
 	else
 	{
 		//printf("odd : %d\n",Arr[iCnt]);
 		oSum= oSum+Arr[iCnt];
 	}
 }
 printf("Sum of All Even no.is %d\n",eSum);
 printf("Sum of All Odd no.is %d\n",oSum);
 return eSum-oSum;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength=0;
    int *p = NULL; 
   
    printf("Enter number of elements");
    scanf("%d",&iSize);
   
    p = (int *)malloc(iSize * sizeof(int));
   
   if(p == NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }

     printf("Enter %d elements ",iSize);
     //scanf("%d",&iLength);
    
    for(iCnt = 0;iCnt<iSize; iCnt++)
       {
           printf("Enter element : %d\n",iCnt+1);
           scanf("%d",&p[iCnt]);
        }
    
     iRet = Difference(p, iSize);


       printf("Result is %d\n",iRet);
        free(p);
    return 0;
}