#include<stdio.h>
void main()
{
	int start, end;		//declaration
	int sum = 0;		//initialization
	
	printf("Enter a starting number : ");
	scanf("%d",&start);
	printf("Enter an ending number : ");
	scanf("%d",&end);
	
	int i;
	for(i=start; i<=end; i++)
	{
		sum = sum + i;
	}
	printf("Sum = %d", sum);
}
