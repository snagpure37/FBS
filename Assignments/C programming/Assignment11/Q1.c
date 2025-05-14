#include<stdio.h>
#include<string.h>

void searchCharacter(char*, char);

void main()
{
	char str[10];
	printf("Enter a string : ");
	gets(str);		//new line terminator
//	fgets(str,sizeof(str),stdin);	//adds new line terminator at the end
	
	char ch;
	printf("Enter a character you want to search : ");
	scanf("%c",&ch);
	
	searchCharacter(str,ch);
}

void searchCharacter(char* str, char ch)
{
	int i;
	for(i=0; i<strlen(str); i++)
	{
		if(ch == str[i])
		{
			printf("found at position %d\n",i+1);
		}
	}
}
