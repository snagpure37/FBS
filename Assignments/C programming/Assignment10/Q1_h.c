#include<stdio.h> 
 
char* myStrRev(char*); 
 
void main() 
{ 
    char str[] = "Welcome to the programming world";
	printf("Original String: %s\n", str);
	
	char* ptr = myStrRev(str);
	printf("Reverse String: %s", ptr); 
}
 
char* myStrRev(char* str)  
{ 
    int len = 0; 
 
    while (str[len] != 0) 
	{
		len++; 
    } 
    int i = 0;     
	int j = len - 1; 
     
    while (i < j)  
 	{ 
        char temp = str[i];
		str[i] = str[j];
		str[j] = temp; 
 
        i++; 
        j--; 
    }
    return str;  
} 

