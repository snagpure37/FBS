#include<stdio.h> 
 
char* myStrNCat(char*,char*,int); 

void main() 
{ 
 	char str1[15]="Hello";  	
	char str2[15]="World";  	
	
	char *ptr=myStrNCat(str1,str2,5); 
 	 
 	printf("%s\n",str1); 
} 
 
char* myStrNCat(char*str1,char* str2,int s) 
{ 
 	int i=0; 
 	while(str1[i]!='\0') 
 	{
	 	i++;  	
	}
 	 
 	int j=0; 
 	while(str2[j]!='\0') 
 	{ 
 	 	str1[i]=str2[j]; 
 	 	i++;  	 	
		j++; 
 	} 
 	str1[i]='\0'; 
 	return str1; 
} 

