// 3. Write a program which accept distance in kilometre 
// and convert it into meter. (1 kilometre = 1000 Meter)
// Input : 5
// Output : 5000
// Input : 12
// Output : 12000

#include<stdio.h>
int KMtoMeter(int iNo)
{
   int iM = 0;
   iM = 1000 * iNo;
   return iM;   
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance in Km");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("Distance in Meter is : %d",iRet);


return 0;
}