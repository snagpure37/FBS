#include<stdio.h>
#include<string.h>

char* myStrnCpy(char*,char*,int);

void main()
{
	char str1[50],str2[50];
	printf("Enter max 50 characters for str1 : ");
	gets(str1);
	
	int maxCount;
	printf("Enter the max number of characters that you want to copy : ");
	scanf("%d",maxCount);
	
	char* cpy = myStrnCpy(str2,str1,maxCount);
	fflush(stdin);
	printf("Copied text = %s",cpy);
}

char* myStrnCpy(char* str2,char* str1, int maxCount)
{
	int i;
	for(i = 0; i<strlen(str1) && i<maxCount; i++)
	{
		*str2++ = *str1++;
	}
	str2[i] = '\0';
	printf("%s",str2);
	return str2;
}

