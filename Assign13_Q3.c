//3. Accept number of rows and number of columns from 
//user and display below pattern.

//Input : iRow = 5 iCol = 5
//Output : 
//$ * * * *
//# $ * * *
//# # $ * *
//# # # $ *
//# # # # $

//Program Layout :

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	if(iRow != iCol)
	{
		printf("Invalid Output\n");
		return ;
	}
   int i=0,j=0;
    for(i=1;i<=iRow;i++)
     {
     	
     	for(j=1;j<=iCol;j++)
     	{
             if(i==j)
             {
                printf("$ "); 
             }
             if(i<j)
             {
             	printf("* ");
             }
             if(i>j)
             {
             	printf("# ");
             }
     	}
         
     	
     	printf("\n");
     } 
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}