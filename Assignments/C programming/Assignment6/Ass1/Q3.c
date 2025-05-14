#include<stdio.h>
void main()
{
	int num;
	printf("Enter three digit number only : ");
	scanf("%d",&num);
	int temp = num;
	int count = 0;
	while(temp>0)
	{
		count++;
		temp/=10;
	}
	if(count == 3)
	{
		sumOfDigit(&num);
		reverse(&num);
	}
	else
		printf("please enter 3 digit number\n");
	
	
	
}

void reverse(int *num)
{
	int rev = 0;
	while(*num>0)
	{
		int rem = *num%10;
		rev = rev*10+rem;
		*num/=10;
	}
	printf("reversed number = %d ",rev);
}

void sumOfDigit(int* num)
{
//	printf("Size of = %d ",sizeof(num));
	int temp = *num;
	int sum = 0;
	while(*num > 0)
	{
		int rem = *num%10;
		sum = sum+rem;
		*num/=10;
	}
	printf("Sum of digits = %d\n",sum);
	*num = temp;
}
