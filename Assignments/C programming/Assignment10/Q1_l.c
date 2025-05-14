#include<stdio.h> 
 
char* mystrrchr(char*, char); 
 
void main() 
{ 
    char str[] = "Hello World"; 
	    
	char ch;     
	printf("Enter The character: ");     
	scanf(" %c", &ch);   
 
    char *result = mystrrchr(str, ch); 
     
    if(result != NULL) 
    { 
        printf("Character '%c' found at index %ld\n", ch, (result - str));   
    } 
    else 
    { 
        printf("Character not found\n"); 
    } 
} 
 
char* mystrrchr(char *str, char ch) 
{
	int i = 0; 
    char* last_occurrence = NULL;   
     
    while(str[i] != '\0') 
    { 
        if(str[i] == ch) 
        { 
            last_occurrence = &str[i]; 
 	 	} 
        i++; 
    } 
 
    return last_occurrence;   
} 

