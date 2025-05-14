#include<stdio.h>
#include<string.h>
void replaceBlankSpace(char*, char);

void main()
{
	char str[30];
	printf("Enter a string : ");
	gets(str);
	
	char ch;
	printf("Enter the character you want to replace the blank space : ");
	scanf("%c",&ch);
	
	replaceBlankSpace(str,ch);
	printf("Updated string = \n%s",str);
}

void replaceBlankSpace(char* str, char ch)
{
	int i;
	for(i=0; i<strlen(str); i++)
	{
		if(str[i] == ' ')
			str[i] = ch;
	}
}
