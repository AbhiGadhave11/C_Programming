#include<stdio.h>
#include<stdbool.h>

void strrevx(char *start)
{

    char *end = start;
    char temp;
    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
	char arr[30],cValue='\0';
	int bRet = false;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

   strrevx(arr);

   printf("Reverse String is %s\n",arr);
  
    return 0;
}