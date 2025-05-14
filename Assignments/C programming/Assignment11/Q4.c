#include<stdio.h>
#include<string.h>
void exchangeFirstAndLast(char*);

void main()
{
	char str[30];
	printf("Enter a string : ");
	gets(str);
	
	exchangeFirstAndLast(str);
	printf("Updated string : \n%s",str);
}

void exchangeFirstAndLast(char* str)
{
	char temp = str[0];
	str[0] = str[strlen(str)-1];
	str[strlen(str)-1] = temp;
}


