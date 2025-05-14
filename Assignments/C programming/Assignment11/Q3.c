#include<stdio.h>
#include<string.h>
void removeNthIndex(char*,int);

void main()
{
	char str[30];
	printf("Enter string : ");
	gets(str);
	
//	int n = strlen(str);
//	printf("%d\n",n);

	int pos;
	printf("Which positioned character you want to remove : ");
	scanf("%d",&pos);
	
	removeNthIndex(str,pos);
	
	printf("updated string :\n%s",str);
//	printf("%d",strlen(str));
}

void removeNthIndex(char* str,int pos)
{
	if(pos<0 && pos>=strlen(str))
	{
		printf("Invalid index");
	}
	int i;
	for(i=pos; i<strlen(str); i++)
	{
		str[i] = str[i+1];
	}
}






