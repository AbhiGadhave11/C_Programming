// 5. Accept one character from user and 
// check whether that character is vowel  (a,e,i,o,u) or not.  
// Input : E   	Output : TRUE  
// Input : d   	Output : FALSE  
#include<stdio.h>
#include<stdbool.h>
// typedef int bool ; 
 # define TRUE 1
 # define FALSE 0 
  
bool ChkVowel (char ich)  
{  
   char a,e,i,o,u,A,E,I,O,U;
 	if((ich==a)||(ich==e)||(ich==i)||(ich==o)||(ich==u)||(ich==A)||(ich==E)||(ich==I)||(ich==O)||(ich==U))  
 	 {  
          	return true ;
      } 
 	else  
	  {  
          	return false; 
      } 
}  
int main() 
{  	char cValue = '\0'; 
 	bool bRet = false; 
 	 
 	printf("Enter character\n");  	
	scanf("%c",&cValue); 
    bRet = ChkVowel(cValue ); 
 	 
 	if (bRet == true) 
 	{ 
 	 	printf("It is Vowel"); 
 	} 
 	else 
 	{ 
       printf("It is not Vowel"); 
 	} 
 	return 0; 
} 
