#include<stdio.h>
//function declaration
float priceOfItem();
int greatestOfThree();
int operation();
int addition();
int difference();
int product();
int division();
int remainder();
int evenOdd();
float calcSal();
float calPrice();

void main()
{
//	function call
	printf("you need to pay total amount of = %.2f\n",priceOfItem());			//Q1
	printf("\n");
	
	printf("greatest number = %d\n",greatestOfThree());				//Q2
	printf("\n");

	printf("result = %d\n",operation());			//Q3
	printf("\n");

	int choice;
	printf("Enter your choice : ");					//Q4
	scanf("%d",&choice);
	if(choice == 1)
		evenOdd()? printf("even number\n") : printf("odd number\n");
	else
		if(choice == 2)
			printf("Total salary = %f\n",calcSal());
		else
			printf("Invalid choice\n");
	printf("\n");

	printf("total price = %.2f\n",calPrice());				//Q5
	printf("\n");
	
}

//function definition
float priceOfItem()
{
	float price,discount;
	
	printf("Enter the original price : ");
	scanf("%f",&price);
	
	if(price < 500)
		discount = price * 0.10;
	else
		if(price < 100)
			discount = price * 0.15;
		else
			discount = 0;
	return (price-discount);
}


float calPrice()
{
	float price,discountedPrice;
	char isStudent;
	printf("Enter the price of product : ");
	scanf("%f",&price);
	
	printf("are you a student (y/n): ");
	fflush(stdin);
	scanf("%c",&isStudent);
	
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

float calcSal()
{
	float sal,da,ta,hra;
	printf("Enter a salary : ");
	scanf("%f", &sal);
	
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

int evenOdd()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num%2==0)
		return 1;
	else
		return 0;
}

int operation()
{
	char choice;
	printf("Enter your choice : ");
	fflush(stdin);
	scanf("%c",&choice);
	
	if(choice == '+')
		return (addition());
	else
		if(choice == '-')
			return (difference());
		else
			if(choice == '*')
				return (product());
			else
				if(choice == '/')
					return (division());
				else
					if(choice == '%')
						return (remainder());
					else
						printf("Invalid choice\n");
}

int remainder()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	return (a%b);
}

int division()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	return (a/b);
}

int product()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	return (a*b);
}

int difference()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	return(a-b);
}

int addition()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	return(a+b);
}

int greatestOfThree()
{
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
			return a;
		else
			return b;
	}
	else
	{
		if(b>c)
			return b;
		else
			return c;
	}
}

