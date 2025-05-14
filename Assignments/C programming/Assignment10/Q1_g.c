#include <stdio.h> 
 
void myStrLower(char* str) 
{
	int i = 0;     
	while (str[i] != '\0')  
 	{   
        if (str[i] >= 'A' && str[i] <= 'Z')  
 	 	{   
            str[i] = str[i] + ('a' - 'A');   
        }         
		i++;   
    } 
} 
 
void main() 
{ 
    char str[100]; 
     
    printf("Enter a string: ");     
	fgets(str, sizeof(str), stdin);   
 
    myStrLower(str); 
 
    printf("The string in lowercase: %s", str);
} 

