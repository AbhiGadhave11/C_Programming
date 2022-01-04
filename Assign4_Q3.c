// 3.Write a program which accept number from user 
// and display all its non factors. 
// Input :  	12 											
// Output : 	5 	7 	8 	9 	10 	11 						
// Input : 	13 											
// Output : 	2 	3 	4 	5 	6 	7 	8 	9 	10 	11 	12 	 
// Input :  	10 	 										
// Output : 	3 	4 	6 	7 	8 	9 	 					

#include<stdio.h> 
void NonFact(int iNo) 
{ 
 int  icnt=0;
  for(icnt=1;icnt<iNo;icnt++)
  {
     if(iNo%icnt!=0)
      {
        printf("%d\t",icnt);
      }
  }	 
 	 
} 
int main() 
{ 
 	int iValue = 0; 
 	printf("Enter number");  	
	scanf("%d",&iValue);  	
	NonFact(iValue); 
 	return 0; 
} 
