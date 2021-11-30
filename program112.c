#include<stdio.h>
#include<stdbool.h>

void swap(char *p,char *q)
{
    char temp;
    temp = *p;
    *p = *q;
    *q = temp;
    
}

int main()
{
	char ch1,ch2;

    printf("Enter First Character\n");
    scanf("%c",&ch1);

    printf("Enter Second Character\n");
    scanf(" %c",&ch2);

    printf("Before swapping characters are %c &  %c\n",ch1,ch2);
    
    swap(&ch1,&ch2);

    printf("Before swapping characters are %c &  %c\n",ch1,ch2);
    
  
    return 0;
}