#include<stdio.h>
void main()
{
	int num;		//declaration
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
		printf("%d is even number", num);
	else
		printf("%d is odd number", num);
}
