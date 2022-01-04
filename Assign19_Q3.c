/*3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 90 (93 -3)
Program Layout :*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Maximum(int Arr[], int iLength)
{
    int iSmall=0,iCnt=0,iBig =0;
   
   iBig = Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iBig)
        {
           iBig = Arr[iCnt];
        }
    } 

    iSmall = Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
    	if(Arr[iCnt]<iSmall)
    	{
           iSmall = Arr[iCnt];
    	}
    } 
    return iBig-iSmall;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
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
iRet = Maximum(p, iSize);
printf("Difference Number is %d",iRet);
free(p);
return 0;
}