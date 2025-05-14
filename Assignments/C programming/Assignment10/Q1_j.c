#include <stdio.h> 
#include <ctype.h>   
 
int mystrcasecmp(char* str1, char* str2)  
{ 
   while (*str1 != '\0' && *str2 != '\0')  
   { 
        char c1 = tolower(*str1);         
		char c2 = tolower(*str2); 
         
        if (c1 != c2) 
		{             
			return c1 - c2;   
        } 
         
        str1++;         
		str2++; 
    } 
 
    return *str1 - *str2; 
} 
 
void main() 
{     
	char str1[100], str2[100]; 
 
    printf("Enter first string: ");     
	fgets(str1, sizeof(str1), stdin); 
     
    printf("Enter second string: ");     
	fgets(str2, sizeof(str2), stdin); 
 
    int result = mystrcasecmp(str1, str2); 
 
    if (result == 0)  
 	{ 
        printf("The strings are equal .\n"); 
    }  
 	else if (result > 0) 
    { 
        printf("The first string is greater than the second .\n"); 
    }  
 	else  
 	{ 
        printf("The first string is smaller than the second.\n"); 
    }
} 

