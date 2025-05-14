#include<stdio.h>
void main()
{
	int num, orig, rem, rev = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	orig = num;
	while(num > 0)
	{
		rem = num%10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	if(rev == orig)
		printf("%d is an palindrome number", orig);
	else
		printf("%d is not an palindrome number", orig);
}
