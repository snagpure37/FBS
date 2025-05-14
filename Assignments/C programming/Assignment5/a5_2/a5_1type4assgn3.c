#include<stdio.h>
//function declaration
void numbers();		// cannot lie in type 2 of function because this needs to return multiple values
void table();		// cannot lie in type 2 of function because this needs to return multiple values
int sumOfNum(int, int);
int isPrime(int);
int isArmstrong(int);
int isPerfect(int);
int factorial(int);
int isStrong(int);
int isPalindrome(int);
int sumOfFirstAndLast(int);


void main()
{
//	function call
	numbers();		//Q1
	table();		//Q2

	int start, end;
	printf("Enter a range : ");
	scanf("%d%d",&start,&end);
	printf("sum = %d\n\n",sumOfNum(start,end));		//Q3

	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	isPrime(num) ? printf("%d is prime number\n\n",num) : printf("%d is not prime number\n\n",num);		//Q4

	isArmstrong(num) ? printf("%d is armstrong number\n\n",num) : printf("%d is not armstrong number\n\n",num);	//Q5
	
	isPerfect(num) ? printf("%d is perfect number\n\n",num) : printf("%d is not perfect number\n\n",num);	//Q6
	
	printf("factorial of %d = %d\n\n",num,factorial(num));		//Q7
	
	isStrong(num) ? printf("%d is strong number\n\n",num) : printf("%d is not strong number\n\n",num);	//Q8
	
	isPalindrome(num) ? printf("%d is palindrome\n\n",num) : printf("%d is not palindrome\n\n",num);	//Q9
	
	printf("Sum of first and last digit = %d",sumOfFirstAndLast(num));
}

//function definition
int sumOfFirstAndLast(int num)
{
	int first,last;
	last = num%10;
	while(num>0)
	{
		first = num%10;
		num/=10;
	}
	return first+last;
}

int isPalindrome(int num)
{
	int rev = 0,rem;
	int temp = num;
	
	while(num > 0)
	{
		rem = num %10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	if(temp == rev)
		return 1;
	else
		return 0;
	
}

int isStrong(int num)
{
	int temp = num;
	
	int i, rem, fact,sum = 0;
	while(num>0)
	{
		fact =1;
		rem = num%10;
		for(i=1;i<=rem;i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(temp == sum)
		return 1;
	else
		return 0;
	
}

int factorial(int num)
{
	int i, fact = 1;
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	return fact;
}

int isPerfect(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i ==0)
		{
			sum = sum+i;
		}
	}
	if(sum == num)
		return 1;
	else
		return 0;
}

int isArmstrong(int num)
{
	int sum = 0,count =0;
	int rem;
	
	int temp = num;

	while(num > 0)			//loop that returns count of digits
	{
		count++;
		num = num/10;
	}
	num = temp;			//reassigns original num to temp as temp becomes 0 while counting digits
	
	while(temp > 0)
	{
		rem = temp %10;		//gets remainder
//		tempCount = count;		//reassigns count to tempCount as tempCount becomes 0 at the end of this iteration
		int res = 1;
		int i;				//reassigns m=1 as m become new value at the end of iteration
		for(i = 1; i <= count; i++)
			res = res*rem;
		sum = sum + res;		
		temp = temp/10;
	}
	if(sum == num)
		return 1;
	else
		return 0;

}

int isPrime(int num)
{	
	int i,count = 0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
	}
	
	if(count == 2)
		return 1;
	else
		return 0;
	
}

int sumOfNum(int start,int end)
{
	int sum = 0;
	int i;
	for(i=start;i<=end;i++)
	{
		sum = sum+i;
	}
	return sum;
	
}

void numbers()
{
	int i;
	for(i=1; i<=10; i++)
	{
		printf("%d ",i);
	}
	printf("\n\n");
}

void table()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("table of %d is :\n",num);
	
	int i;
	for(i=1;i<=10; i++)
	{
		printf("%d ",num * i);
	}
	printf("\n\n");
}

void squareOfNum()
{
	int num,prod = 1;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("square table of %d is :\n",num);
	
	int i;
	for(i=1;i<=10; i++)
	{
		prod = prod * num;
		printf("%d ",prod);
	}
	
}
