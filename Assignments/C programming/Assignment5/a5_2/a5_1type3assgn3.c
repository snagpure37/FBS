#include<stdio.h>
//function declaration
void numbers();
void table(int);
void sumOfNum(int,int);
void isPrime(int);
void isArmstrong(int);
void isPerfect(int);
void factorial(int);
void isStrong(int);
void isPalindrome(int);
void sumOfFirstAndLast(int);

void main()
{
//	function call
	numbers();		//Q1
	printf("\n\n");
	
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	table(num);		//Q2

	int start, end;
	printf("Enter the range : ");
	scanf("%d%d",&start,&end);
	sumOfNum(start,end);		//Q3

	isPrime(num);		//Q4

	isArmstrong(num);		//Q5
	
	isPerfect(num);		//Q6
	
	factorial(num);		//Q7
	
	isStrong(num);		//Q8
	
	isPalindrome(num);		//Q9
	
	sumOfFirstAndLast(num);		//Q10
	
}

//function definition:

void sumOfFirstAndLast(int num)
{
	int first,last;
	last = num%10;
	while(num>0)
	{
		first = num%10;
		num/=10;
	}
	printf("sum of %d and %d is %d\n\n",first,last,first+last);
}

void isPalindrome(int num)
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
		printf("%d is palindrome\n\n",temp);
	else
		printf("%d is not palindrome\n\n",temp);
	
}

void isStrong(int num)
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
		printf("%d is strong number\n\n",temp);
	else
		printf("%d is not strong number\n\n",temp);
	
}

void factorial(int num)
{	
	int i, fact = 1;
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d = %d\n\n",num,fact);
}

void isPerfect(int num)
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
		printf("%d is perfect number\n\n",num);
	else
		printf("%d is not perfect number\n\n",num);
}

void isArmstrong(int num)
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
	{
		printf("%d is Armstrong number\n\n", num);
	}
	else{
		printf("%d is not armstrong number\n\n", num);
	}

}

void isPrime(int num)
{
	int i,count = 0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
	}
	
	if(count == 2)
		printf("%d is prime number\n\n",num);
	else
		printf("%d is not prime number\n\n",num);
	
}

void sumOfNum(int start, int end)
{
	int sum = 0;
	
	int i;
	for(i=start;i<=end;i++)
	{
		sum = sum+i;
	}
	printf("Sum of numbers between %d and %d = %d\n\n",start,end,sum);
	
}

void numbers()
{
	int i;
	for(i=1; i<=10; i++)
	{
		printf("%d ",i);
	}
}

void table(int num)
{
	printf("table of %d is :\n",num);
	
	int i;
	for(i=1;i<=10; i++)
	{
		printf("%d ",num * i);
	}
	printf("\n\n");	
}


