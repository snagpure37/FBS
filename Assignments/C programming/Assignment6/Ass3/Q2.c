#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	tableOfNum(&num);
}

void tableOfNum(int* n)
{
	int i,res;
	for(i = 1;i<=10;i++)
	{
		res = *n * i;
		printf("%d ",res);
	}
		
}
