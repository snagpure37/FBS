#include<stdio.h> 
 
int mystrncmp(char*,char*,int); 

void main() 
{ 
 	char str1[]="hello";  	
	char str2[]="world";  	
	int ptr=mystrncmp(str1,str2,3); 
     
    if(ptr==0)        
		printf("string are equal");     
	else if(ptr>0)        
		printf("'%s' Is Greater Than '%s'",str1,str2);     
	else if(ptr<0)        
		printf("'%s' Is Greater Than '%s'",str2,str1); 
     
} 
 
int mystrncmp(char*str1,char*str2,int s ) 
{
 	int i=0; 
 	while((str1[i]!='\0' )&& (str2[i]!='\0')) 
 	{
 	 	if(str1[i]!=str2[i]) 
 	 	{
 	 	 	return ((str1[i])-(str2[i])); 
 	 	} 
 	 	i++; 
 	} 
	int res=((str1[i])-(str2[i]));  
	return res ; 	 
} 

