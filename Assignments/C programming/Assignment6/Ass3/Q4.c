#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	isPrime(&num);
}

void isPrime(int* n)
{
	int i;
	int flag = 0;
	if((*n == 0) || (*n == 1))
	{
		flag = 1;
	}
//	printf("%d ",*n);				// *n =13
	for(i = 2; i <= (*n/2); i++)
	{
		if((*n % i) == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("%d is prime number",*n);
	}
	else
	{
		printf("%d is not prime number",*n);
	}
}
