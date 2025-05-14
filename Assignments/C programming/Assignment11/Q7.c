#include<stdio.h>
#include<string.h>
void removeOddIndex(char*);

void main()
{
	char str[30];
	printf("Enter the string : ");
	gets(str);
	
	removeOddIndex(str);
	printf("updated string = %s",str);
}

void removeOddIndex(char* str)
{
	char temp[strlen(str)];
	int i,j=0;
	for(i=0; i<strlen(str); i++)
	{
		if(i%2==0)
		{
			temp[j] = str[i];
			j++;
		}
	}
	strcpy(str,temp);
}
