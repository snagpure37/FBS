#include<stdio.h>
//function declaration
float priceOfItem(float);
int greatestOfThree(int,int,int);
int operation(char);
int addition(int,int);
int difference(int,int);
int product(int,int);
int division(int,int);
int remainder(int,int);
int evenOdd(int);
float calcSal(float);
float calPrice(float,char);

void main()
{
//	function call
	float cost;
	printf("Enter the original price : ");
	scanf("%f",&cost);
	printf("you need to pay total amount of = %.2f\n\n",priceOfItem(cost));		//Q1
	
	int no1,no2,no3;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&no1,&no2,&no3);
	printf("greatest number = %d\n\n",greatestOfThree(no1,no2,no3));		//Q2

	char ch;
	printf("Enter your choice : ");
	fflush(stdin);
	scanf("%c",&ch);
	printf("result = %d\n\n",operation(ch));			//Q3

	int choice;
	printf("Enter your choice : ");
	scanf("%d",&choice);					//Q4
	if(choice == 1)
	{
		int num;
		printf("Enter a number : ");
		scanf("%d", &num);
		evenOdd(num)? printf("%d is even number\n\n",num) : printf("%d is odd number\n\n",num);
	}
	else
		if(choice == 2)
		{
			float salary;
			printf("Enter a salary : ");
			scanf("%f", &salary);
			printf("Total salary = %f\n\n",calcSal(salary));
		}
		else
			printf("Invalid choice\n\n");

	float price;
	char isStudent;
	printf("Enter the price of product : ");
	scanf("%f",&price);
	
	printf("are you a student (y/n): ");
	fflush(stdin);
	scanf("%c",&isStudent);
	
	printf("total price = %.2f\n\n",calPrice(price,isStudent));			//Q5
}

//function definition
float priceOfItem(float price)
{
	float discount;
	
	if(price < 500)
		discount = price * 0.10;
	else
		if(price < 100)
			discount = price * 0.15;
		else
			discount = 0;
	return (price-discount);
}


float calPrice(float price,char isStudent)
{
	float discountedPrice;
	
	if(isStudent == 'y' || isStudent == 'Y')
	{
		if(price > 500)
		{
			discountedPrice = price * 0.20;
		}
		else
		{
			discountedPrice = price * 0.10;
		}
	}
	else 
		if(isStudent == 'n' || isStudent == 'N')
		{
			if(price > 600)
			{
				discountedPrice = price * 0.15;
			}
			else
			{
				discountedPrice = 0;
			}
		}
	return (price - discountedPrice);
}

float calcSal(float sal)
{
	float da,ta,hra;
	
	if(sal <= 5000)
	{
		da = sal * 0.10;
		ta = sal * 0.20;
		hra = sal * 0.25;
	}
	else
	{
		da = sal * 0.15;
		ta = sal * 0.25;
		hra = sal * 0.30;
	}
	return (sal + da + ta + hra);
}

int evenOdd(int num)
{
	return (num%2==0);
}

int operation(char choice)
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	if(choice == '+')
		return (addition(a,b));
	else
		if(choice == '-')
			return (difference(a,b));
		else
			if(choice == '*')
				return (product(a,b));
			else
				if(choice == '/')
					return (division(a,b));
				else
					if(choice == '%')
						return (remainder(a,b));
					else
						printf("Invalid choice\n");
}

int remainder(int a,int b)
{
	return (a%b);
}

int division(int a,int b)
{
	return (a/b);
}

int product(int a,int b)
{
	return (a*b);
}

int difference(int a,int b)
{
	return(a-b);
}

int addition(int a,int b)
{
	return(a+b);
}

int greatestOfThree(int a,int b,int c)
{
	return (a>b ? (a>c?a:c) : (b>c?b:c));
}

