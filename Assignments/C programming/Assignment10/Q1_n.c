#include <stdio.h> 
 
char* myStrNStr(char* h, char* n,int s)  
{
	if (*n == '\0')  
 	{ 
        return (char*)h;   
    }
    
    int i;
    for(i = 0; h[i] != '\0'; i++)  
 	{ 
        int j = 0; 
        while (h[i + j] == n[j])  
 	 	{ 
            if (n[j + 1] == '\0')  
 	 	 	{ 
                return (char*)&h[i]; 
            }             
			j++; 
        } 
    } 
    return NULL;  
} 
 
void main()  
{ 
    char h[] = "Hello, welcome to the world of C programming!";     
	char n[] = "welcome"; 
     
    char* result = myStrNStr(h, n,3); 
     
    if (result != NULL)  
 	{ 
        printf("'%s' found at position: %ld\n",n, result - h); 
    }  
 	else  
 	{ 
        printf("'%s' not found.\n",n); 
    }  
}

