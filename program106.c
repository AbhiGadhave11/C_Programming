#include<stdio.h>

int ChkVowels(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
    while(*str!='\0')
    {
    	if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
    	{
    		iCnt++;
    	}
    	str++;
    }  
    return iCnt;
}
int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);
	
	iRet = ChkVowels(arr);

	printf("Number of Vowels are : %d",iRet);

	return 0;
}