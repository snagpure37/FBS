#include<stdio.h>
#include<string.h>

void replaceCharacter(char*,char,char);

void main()
{
	char str[30];
	printf("Enter a string : ");
	gets(str);
	
	char oldCh;
	printf("Enter a character that you want to replace : ");
	fflush(stdin);
	scanf("%c",&oldCh);
	
	char newCh;
	printf("Enter a character that you want to replace with : ");
	fflush(stdin);
	scanf("%c",&newCh);
	
	replaceCharacter(str,newCh,oldCh);
	printf("Updated string = %s",str);
}

void replaceCharacter(char* str,char newCh,char oldCh)
{
	int i;
	for(i=0; i<strlen(str); i++)
	{
		if(str[i] == oldCh)
			str[i] = newCh;
	}
}
