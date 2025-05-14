#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	int lastDigit = num%10;			//remainder is last digit here
	printf("last digit = %d\n", lastDigit);
	
	while(num > 10)
		num = num / 10;				//quotient
	int firstDigit = num;
	printf("First digit = %d\n", firstDigit);
	
	int sum = lastDigit + firstDigit;
	printf("Sum = %d\n", sum);
}
