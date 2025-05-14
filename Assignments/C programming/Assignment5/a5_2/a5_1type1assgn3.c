#include<stdio.h>
//function declaration
void numbers();
void table();
void sumOfNum();
void isPrime();
void isArmstrong();
void isPerfect();
void factorial();
void isStrong();
void isPalindrome();
void add1standLast();

void main()
{
//	Function call
	numbers();		//Q1
	printf("\n");
	
	table();		//Q2
	printf("\n");

	sumOfNum();		//Q3
	printf("\n");

	isPrime();		//Q4
	printf("\n");

	isArmstrong();		//Q5
	printf("\n");
	
	isPerfect();		//Q6
	printf("\n");
	
	factorial();		//Q7
	printf("\n");
	
	isStrong();			//Q8
	printf("\n");
	
	isPalindrome();			//Q9
	printf("\n");
	
	add1standLast();		//Q10
	printf("\n");
}

//function definition
void add1standLast()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int last = num%10;
	int first;
	while(num>0)
	{
		first = num%10;
		num = num/10;
	}
	printf("Sum of %d and %d digit = %d\n", first, last, first+last);
}

void isPalindrome()
{
	int num,rev = 0,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	int temp = num;
	
	while(num > 0)
	{
		rem = num %10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	if(temp == rev)
		printf("%d is palindrome\n",temp);
	else
		printf("%d is not palindrome\n",temp);
	
}

void isStrong()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
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
		printf("%d is strong number\n",temp);
	else
		printf("%d is not strong number\n",temp);
	
}

void factorial()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	int i, fact = 1;
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d = %d\n",num,fact);
}

void isPerfect()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i ==0)
		{
			sum = sum+i;
		}
	}
	if(sum == num)
		printf("%d is perfect number\n",num);
	else
		printf("%d is not perfect number\n",num);
}

void isArmstrong()
{
	int num, sum = 0,count =0;
	int rem;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
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
		printf("%d is Armstrong number\n", num);
	}
	else{
		printf("%d is not armstrong number\n", num);
	}

}

void isPrime()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	int i,count = 0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
	}
	
	if(count == 2)
		printf("%d is prime number\n",num);
	else
		printf("%d is not prime number\n",num);
	
}

void sumOfNum()
{
	int start, end,sum = 0;
	printf("Enter a range : ");
	scanf("%d%d",&start,&end);
	
	int i;
	for(i=start;i<=end;i++)
	{
		sum = sum+i;
	}
	printf("Sum of numbers between %d and %d = %d\n",start,end,sum);
	
}

void numbers()
{
	int i;
	printf("Numbers from 1 to 10 are :\n");
	for(i=1; i<=10; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
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
	printf("\n");
	
}

