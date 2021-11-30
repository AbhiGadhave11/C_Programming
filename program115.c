#include<stdio.h>

int main() 
{
   int iValue=0;
   printf("Enter Number\n");
   scanf("%d",&iValue);

   printf("In decimal : %d\n",iValue);
   printf("In octal : %o\n",iValue);
   printf("In Hexadecimal : %x\n",iValue);
	return 0;
}
