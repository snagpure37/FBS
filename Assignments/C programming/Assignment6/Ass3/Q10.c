#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	firstPlusLast(&num);
}

void firstPlusLast(int* no)
{
	int first,last;
	last = *no % 10;
	while(*no > 0)
	{
		first = *no%10;
		*no /= 10;
	}
	printf("Sum of %d and %d = %d",first,last,first+last);
}
