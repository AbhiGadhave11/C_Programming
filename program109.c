#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    start = str;
    end = str;
    while(*end!='\0')
    {
    	end++;
    }
    end--;
    while(start < end)
    {
    	if(*start != *end)
    	{
    		break;
    	}
    	start++;
    	end--;
    }
    if(start<end)
    {
    	return false;
    }
    else
    {
    	return true;
    }
}

int main()
{
	char arr[30],cValue='\0';
	int bRet = false;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

   
	
	bRet = ChkPalindrome(arr);
	
	if(bRet==true)
	{
		printf("It is Palindrome\n");
	}
	else
	{
		printf("It is not Palindrome\n");
	}

	

	return 0;
}