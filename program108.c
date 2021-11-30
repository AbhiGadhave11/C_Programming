#include<stdio.h>

int CountFrequency(char *str,char ch)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char arr[20],cValue='\0';
	int iRet = 0;
	
	printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the chraacter\n");
    scanf(" %c",&cValue);
	
	iRet = CountFrequency(arr,cValue);

	printf("Frequency is : %d\n",iRet);

	return 0;
}