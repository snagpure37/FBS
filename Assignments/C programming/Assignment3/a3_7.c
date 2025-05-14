#include<stdio.h>
void main()
{
	int num;
	int fact = 1;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	int i;
	for(i = 1; i<=num; i++)
		fact = fact * i;
	
	printf("Factorial = %d", fact);
}
