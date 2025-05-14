#include<stdio.h>
//function declaration
void priceOfItem(float);
void greatestOfThree(int,int,int);
void operation(char);
void addition(int,int);
void difference(int,int);
void product(int,int);
void division(int,int);
void remainder(int,int);
void evenOdd(int);
void calcSal(float);
void calPrice(float);

void main()
{
//	function call
	float price;
	printf("Enter a price : ");
	scanf("%f",&price);
	priceOfItem(price);				//Q1
	printf("\n\n");

	int num1,num2,num3;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	greatestOfThree(num1,num2,num3);			//Q2
	printf("\n");
	
	char ch;
	printf("Enter your choice operation : ");
	fflush(stdin);
	scanf("%c",&ch);
	operation(ch);				//Q3
	printf("\n");

	int choice;
	printf("Enter your choice : ");				//Q4
	scanf("%d",&choice);
	if(choice == 1)
	{
		int num;
		printf("Enter a number : ");
		scanf("%d",&num);
		evenOdd(num);
	}
	else
		if(choice == 2)
		{
			float salary;
			printf("Enter salary : ");
			scanf("%f",&salary);
			calcSal(salary);
		}
		else
			printf("Invalid choice\n");
		printf("\n");

	calPrice(price);			//Q5
	printf("\n");	
}

//function definition
void priceOfItem(float price)
{
	float discount;
	
	if(price < 500)
		discount = price * 0.10;
	else
		if(price < 100)
			discount = price * 0.15;
		else
			discount = 0;
	printf("final price you need to pay = %.2f",price-discount);
}

void calPrice(float price)
{
	float discountedPrice;
	char isStudent;
	
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
	printf("you need to pay = %.2f",finalAmt);
}

void calcSal(float sal)
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
	float totalSal = sal + da + ta + hra;
	printf("Total Salary = %f\n", totalSal);
}

void evenOdd(int num)
{	
	if(num%2==0)
		printf("%d is even no\n",num);
	else
		printf("%d is odd number\n",num);
}

void operation(char choice)
{
	int no1,no2;
	printf("Enter two numbers : ");
	scanf("%d%d",&no1,&no2);
	if(choice == '+')
		addition(no1,no2);
	else
		if(choice == '-')
			difference(no1,no2);
		else
			if(choice == '*')
				product(no1,no2);
			else
				if(choice == '/')
					division(no1,no2);
				else
					if(choice == '%')
						remainder(no1,no2);
					else
						printf("Invalid choice\n");
}

void remainder(int a,int b)
{	
	printf("Remainder = %d\n", a%b);
}

void division(int a,int b)
{
	printf("Quotient = %d\n", a/b);
}

void product(int a,int b)
{	
	printf("Product = %d\n", a*b);
}

void difference(int a,int b)
{	
	printf("Diff = %d\n", a-b);
}

void addition(int a,int b)
{	
	printf("Sum = %d\n", a+b);
}

void greatestOfThree(int a,int b,int c)
{
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

