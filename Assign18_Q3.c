/*3. Accept N numbers from user and accept one 
another number as NO ,
return index of last occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88

Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1

Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[], int iLength, int iNo)
{
     int iCnt = 0,eCnt=0,oCnt=0;
    
  for(iCnt=(iLength-1);iCnt>=0;iCnt--)
  {
  	  if((Arr[iCnt]==iNo))
   	  {
  		  return (iCnt-1);
  	  }
  	 
  }
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
int *p = NULL;
printf("Enter number of elements\n");
scanf("%d",&iSize);
printf("Enter the number\n");
scanf("%d",&iValue);
p = (int *)malloc(iSize * sizeof(int));
/*if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}*/
printf("Enter %d elements ",iSize);
for(iCnt = (iSize-1);iCnt>=0; iCnt--)
{
printf("Enter element : %d\n",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet = LastOcc(p, iSize,iValue);
if(iRet == -1)
{
printf("There is no such number");
}
else
{
printf("Last occurrence of number is %d",iRet);
}

free(p);
return 0;
}