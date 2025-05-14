#include<stdio.h>
#include<string.h>
int isPalindrome(char*);

int size = 30;
void main()
{
	char str[size];
	printf("Enter the string : ");
	gets(str);
	
	isPalindrome(str)==0? printf("'%s' is palindrome\n",str) : printf("'%s' is not palindrome\n",str);
}

int isPalindrome(char* str)
{
	char cpy[size];
	
	return strcmp(strrev(strcpy(cpy,str)),str);
}
