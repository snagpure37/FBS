#include <stdio.h>   
 
int myStrNCaseCmp(char*, char*, int);

void main() 
{
	char str1[100], str2[100]; 
 
    printf("Enter first string: ");     
	gets(str1);
     
    printf("Enter second string: ");     
	gets(str2);
 
    int result = myStrNCaseCmp(str1, str2, 15); 
 
    if (result == 0)  
 	{ 
        printf("The strings are equal .\n"); 
    }  
 	else if (result > 0) 
    { 
        printf("'%s' is greater than '%s'.\n",str1,str2); 
    }  
 	else  
 	{ 
        printf("'%s' is smaller than '%s'.\n",str1,str2); 
    }
}


int myStrNCaseCmp(char* str1, char* str2, int s)  
{ 
   while (*str1 != '\0' && *str2 != '\0')  
   { 
        char c1 = tolower( *str1);         
		char c2 = tolower( *str2); 
         
        if (c1 != c2) 
		{
			return c1 - c2;   
        } 
        str1++;         
		str2++; 
	} 
    return *str1 - *str2; 
} 
 

