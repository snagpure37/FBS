#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	printf("Enter maximum 50 characters if possible : ");
	fgets(str,sizeof(str),stdin);	//when used this line, returns the count including new line character
//	gets(str);						//when used this line, returns the count of characters only
	printf("Entered string : %s",str);
//	int len = strlen(str);
//	printf("string length : %d",len);
	int length = myStrLen(str);
	printf("string length : %d",length);
}

int myStrLen(char* str)
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
	
}
