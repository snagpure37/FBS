#include<stdio.h>
//function declaration
void priceOfItem();
void greatestOfThree();
void operation();
void addition();
void difference();
void product();
void division();
void remainder();
void evenOdd();
void calcSal();
void calPrice();

void main()
{
//	function call
	priceOfItem();				//Q1
	printf("\n");
	
	greatestOfThree();			//Q2
	printf("\n");

	operation();				//Q3
	printf("\n");

	int choice;					//Q4
	printf("Enter your choice : ");
	scanf("%d",&choice);
	if(choice == 1)
		evenOdd();
	else
		if(choice == 2)
			calcSal();
		else
			printf("Invalid choice\n");
	printf("\n");
	
	calPrice();					//Q5
	printf("\n");
}

//function definition
void priceOfItem()
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
	printf("final price you need to pay = %.2f\n",price-discount);
}

void calPrice()
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
	float finalAmt = price - discountedPrice;
	printf("you need to pay = %.2f\n",finalAmt);
}

void calcSal()
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
	float totalSal = sal + da + ta + hra;
	printf("Total Salary = %.2f\n", totalSal);
}

void evenOdd()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num%2==0)
		printf("%d is even no\n",num);
	else
		printf("%d is odd number\n",num);
}

void operation()
{
	char choice;
	printf("Enter your choice : ");
	fflush(stdin);
	scanf("%c",&choice);
	
	if(choice == '+')
		addition();
	else
		if(choice == '-')
			difference();
		else
			if(choice == '*')
				product();
			else
				if(choice == '/')
					division();
				else
					if(choice == '%')
						remainder();
					else
						printf("Invalid choice\n");
}

void remainder()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	printf("Remainder = %d\n", a%b);
}

void division()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	printf("Quotient = %d\n", a/b);
}

void product()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	printf("Product = %d\n", a*b);
}

void difference()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	printf("Difference = %d\n", a-b);
}

void addition()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	printf("Addition = %d\n", a+b);
}

void greatestOfThree()
{
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
			printf("%d is gratest\n",a);
		else
			printf("%d is greatest\n",c);
	}
	else
	{
		if(b>c)
			printf("%d is greatest\n",b);
		else
			printf("%d is greatest\n",c);
	}
}

