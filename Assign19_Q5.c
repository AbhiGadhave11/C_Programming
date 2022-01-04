/*5. Accept N numbers from user and display summation
of digits of each number.
Input : N : 6

Elements :8225 665 3 76 953 858

Output : 17 17 3 13 17 21
Program Layout :*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
  int iDigit =0,iCnt=0,Cnt=0,iNo=0,j=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
  	iNo=Arr[iCnt];
  	Cnt=0;
  	for(j=0;j<iNo;j++)
  	{
  	  iDigit=iNo%10;
  	  Cnt = Cnt + iDigit;
  	 iNo=iNo/10;
    }
    printf("Addition: %d\n",Cnt);
  }

}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
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
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element : %d\n",iCnt+1);
scanf("%d",&p[iCnt]);
}
Digits(p, iSize);
free(p);
return 0;
}