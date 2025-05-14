#include <stdio.h> 
 
void myStrUpper(char* str) 
{
	int i = 0;     
	while (str[i] != '\0')  
 	{   
        if (str[i] >= 'a' && str[i] <= 'z')  
 	 	{   
            str[i] = str[i] + ('A' - 'a');   
        }         
		i++;   
    } 
} 
 
void main() 
{ 
    char str[100]; 
     
    printf("Enter a string: ");     
	fgets(str, sizeof(str), stdin);   
 
    myStrUpper(str); 
 
    printf("The string in uppercase: %s", str);
    return;
} 

