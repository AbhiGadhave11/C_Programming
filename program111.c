#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(char *str)
{
    char *end = NULL;
    
    end = str;
    while(*end!='\0')
    {
    	end++;
    }
    end--;
    while(str < end)
    {
    	if(*str != *end)
    	{
    		break;
    	}
    	str++;
    	end--;
    }
    if(str < end)
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