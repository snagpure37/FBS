#include<stdio.h>
#include<string.h>
void main()
{
//	myStrCmp
	char str1[50];
	printf("Enter maximum 50 characters in str1 : ");
	fgets(str1,sizeof(str1),stdin);
	
	char str2[50];
	printf("Enter maximum 50 characters in str2 : ");
	fflush(stdin);
	fgets(str2,sizeof(str2),stdin);
	
	int cmp = myStrCmp(str1,str2);
	cmp == 0? printf("str1 == str2\n"): cmp == -1? printf("str1 <= str2\n"): printf("str1 >= str2\n");
}

int myStrCmp(char* str1,char* str2)
{
	printf("Entered string = \n%s %s",str1,str2);
	int i,count=0;
	while(str1[i] == str2[i])
	{
		i++;
	}
	
//	for(i=0; i<strlen(str1) && i<strlen(str2); i++)
//	{
//		if(str1[i] != str2[i])
//			return str1[i] - str2[i];	
//	}
}
