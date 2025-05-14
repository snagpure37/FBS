#include<stdio.h>
#include<string.h>

char* myStrCat(char*, char*);

void main()
{
	char str1[15] = "hello";
	char str2[15] = "world";
	
	char* ptr = myStrCat(str1,str2);
	printf("concatenated string : %s",ptr);
}

char* myStrCat(char* str1,char* str2)
{
	int i=0;
	while(str1[i] != 0)
	{
		i++;
	}
	int j=0;
	while(str2[j] != 0)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] ='\0';
	return str1;
}

