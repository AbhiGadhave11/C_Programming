// 4.Write a program which accept number from user 
// and return summation of all its non factors. 
// Input :  	12 
// Output : 50 	 
// Input :  10  Output : 37  

#include<stdio.h> 
int SumNonFact(int iNo) 
{ 
   int  icnt=0,sum=0;
   for(icnt=1;icnt<iNo;icnt++)
    {
       if(iNo%icnt!=0)
        {
          // printf("%d\n",icnt);
          sum=sum+icnt;
         }
    }	 
   return sum;
} 
int main() 
{ 
 	int iValue = 0;  	
	int iRet = 0; 
   printf("Enter number"); 
   scanf("%d",&iValue); 
  iRet  = SumNonFact(iValue); 
   printf("%d",iRet); 
 	return 0; 
} 
