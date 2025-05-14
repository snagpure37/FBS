#include<stdio.h>
void displayLargerString(char*, char*);
int calculateLength(char*);

void main()
{
	char str1[30];
	char str2[30];
	
	printf("Enter the string 1 : ");
	gets(str1);
	
	printf("Enter the string 2 : ");
	gets(str2);
	
	displayLargerString(str1,str2);
}

void displayLargerString(char* str1, char* str2)
{
	int str1Len = calculateLength(str1);
	int str2Len = calculateLength(str2);
	
	if(str1Len == str2Len)
	{
		printf("'%s' has length same as '%s\n",str1,str2);
	}
	else 
	{
		if(str1Len > str2Len)
		{
			printf("'%s' is greater\n",str1);
		}
		else
		{
			printf("'%s' is greater\n",str2);
		}
	}
}

int calculateLength(char* s)
{
	int len = 0;
	while(s[len] != '\0')
	{
		len++;
	}
	return len;
	
}

