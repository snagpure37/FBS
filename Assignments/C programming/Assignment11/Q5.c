#include<stdio.h>
#include<string.h>
int countVowels(char*);

void main()
{
	char str[30];
	printf("Enter a string : ");
	gets(str);
	
	int count = countVowels(str);
	printf("Count of vowels in '%s' = %d\n",str,count);
}

int countVowels(char* str)
{
	int count = 0;
	char vow[] = {'a','A','e','E','i','I','o','O','u','U'};
	int i,j;
	for(i=0; i<strlen(vow); i++)
	{
		for(j=0; j<strlen(str); j++)
		{
			if(vow[i] == str[j])
				count++;
		}
	}
	return count;
}

