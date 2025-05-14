#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	factorial(&num);
}

void factorial(int* no)
{
	int i, fact = 1;
	for(i = 1;i<= *no; i++)
		fact = fact * i;
	printf("factorial of %d = %d",*no,fact);
}
