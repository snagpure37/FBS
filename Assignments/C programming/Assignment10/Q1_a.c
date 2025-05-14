#include<stdio.h>
#include<string.h>

char* myStrCpy(char*,char*);

void main()
{
	char str[50], cpystr[50];
	printf("Enter maximum 50 character for a string if possible : ");
	fflush(stdin);
	fgets(str,sizeof(str),stdin);
	
	printf("Entered string = %s",str);
	
	char* cpyString = myStrCpy(cpystr,str);
	printf("Copied string : %s",cpyString);
	int len1 = strlen(str);
	int len2 = strlen(cpystr);
	
	printf("Length of str = %d\n",len1);
	printf("lenth of cpystr = %d",len2);
}

char* myStrCpy(char* cpyStr,char* ogString)
{
	int i;
	for(i=0; i<50; i++)
	{
		cpyStr[i] = ogString[i];
	}
	return cpyStr;
}
