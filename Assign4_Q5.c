// 5.Write a program which accept number from user 
// and return difference between summation of all 
// its factors and non factors. 
// Input :  	12 
// Output : 	-34  (16 - 50)  
// Input :  	10 	 
// Output : 	-29 (8 - 37) 	 

#include<stdio.h> 
int FactDiff(int iNo) 
{ 
 	 
 	int  icnt=0,sum=0,Fsum=0,Difference=0;

    for(icnt=1;icnt<iNo;icnt++)
    {
       if(iNo%icnt==0)
        {
          // printf("%d\n",icnt);
          sum=sum+icnt;
        }
    }	 
  printf("Sum of Factors is : %d\n",sum);

    for(icnt=1;icnt<iNo;icnt++)
    {
       if(iNo%icnt!=0)
        {
           // printf("%d\n",icnt);
           Fsum=Fsum+icnt;
        }
    }	 
  printf("Sum of Non- Factors is : %d\n",Fsum);

  Difference=sum-Fsum;
  return Difference; 

} 
int main() 
{  	int iValue = 0;  	
int iRet = 0; 
   printf("Enter number\n");  
   scanf("%d",&iValue);
   // flushall();
  iRet=FactDiff(iValue); 
  printf("%d\n",iRet); 
 	return 0; 
} 
