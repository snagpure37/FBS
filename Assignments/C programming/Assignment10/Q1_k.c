#include<stdio.h> 
 
char* mystrchr(char*,char); 
 
void main() 
 { 
 	char str[]="Hello World"; 
 	char ch; 
 	printf("Enter The character:");  	
	scanf("%c",&ch); 
 	 
 	char *result=mystrchr(str,ch); 
 	
 	if(result!=NULL) 
 	{ 
   		printf("character %c found at index %d",ch,(result-str)); 
    } 
 	else 
 	  printf("character not found"); 
 	 
} 
 
char* mystrchr(char *str,char ch) 
{ 
 	int i=0; 
 	while(str[i]!='\0') 
 	{ 
 	 	if(str[i]==ch) 
 	 	{ 
 	 	   return(str+i); 	 
 	 	} 
 	 	i++;   
 	} 
 	return NULL; 
} 

