#include<stdio.h>
void display(int iNo)
{
    int icnt=0;
    for(icnt=0;icnt<iNo;icnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}