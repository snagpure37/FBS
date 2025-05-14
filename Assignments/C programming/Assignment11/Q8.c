#include<stdio.h>

void main()
{
	char str[50];
	printf("Enter a string : ");
	gets(str);
	
	int count = countWords(str);
	printf("Count of words in '%s' : %d\n",str,count);
}

int countWords(char* str)
{
	int length = 0;	
	while(str[length] != '\0')
	{
		length++;
	}
	
	int count = 0;
	int flag = 0;
	int i;
	for(i=0; i<length; i++)
	{
		if(str[i]!=' ' && flag == 0)
		{
			count++;
			flag = 1;
		}
		else
		{
			if(str[i] == ' ')
				flag = 0;
		}
	}
	return count;
}

