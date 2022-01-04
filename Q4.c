//4. Accept one character from user and
 // convert case of that character.  
// Input : a   	Output : A  
// Input : D   	Output : d  
#include<stdio.h>
void DisplayConvert ( char CValue)  
{  
 	if(CValue<=90&&CValue>=65)  
 	{  
             CValue=CValue+32;
 	 	printf("% c" , CValue);  
 	}  
 	else if(CValue>=97&&CValue<=122)  
 	{  
                  CValue=CValue-32;
 	 	printf("% c" , CValue);  
 	}  
}  
int main() 
{ 
 	char cValue = '\0'; 
 	 
 	printf("Enter character\n");  	
	scanf("%c",&cValue);
	DisplayConvert(cValue ); 
 	return 0; 
} 
