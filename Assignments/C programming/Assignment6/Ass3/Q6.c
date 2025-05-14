#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	isPerfect(&num);
}

void isPerfect(int* no)
{
	int sum = 0;
	int i;
	for(i = 1;i < *no;i++)
	{
		if(*no%i==0)
			sum = sum+i;
	}
	if(*no == sum)
		printf("%d is perfect number ", *no);
	else
		printf("%d is not perfect number ",*no);
}
