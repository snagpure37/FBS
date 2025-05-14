#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	isPalindrome(&num);
}

void isPalindrome(int* no)
{
	int temp = *no,rev = 0;
	while(temp > 0)
	{
		int rem = temp%10;
		rev = rev*10+rem;
		temp/=10;
	}
	if(*no == rev)
		printf("%d is palindrome ",*no);
	else
		printf("%d is not palindrome ",*no);
}
