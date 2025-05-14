#include<stdio.h>
//function declaration
void cToF(float);
void areaAndPerimOfRect(float,float);
void areaAndCircOfCircle(float);
void countOfNumber(int);
void sumOfDigit(int);
void reverseNumber(int);
void evenOdd(int);
void calcSal(float);
void isEligible(char,int);


void main()
{
//	function call
	float c;
	printf("Enter temperature in celcius : ");
	scanf("%f",&c);
	cToF(c);
	printf("\n");									//Q1

	float l,b;
	printf("Enter length and breadth : ");
	scanf("%f%f",&l,&b);
	areaAndPerimOfRect(l,b);
	printf("\n");
	
	float r;
	printf("Enter radius : ");
	scanf("%f",&r);
	areaAndCircOfCircle(r);
	printf("\n");									//Q2

	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	countOfNumber(num);
	printf("\n");

	sumOfDigit(num);
	reverseNumber(num);								//Q3
	printf("\n");

	evenOdd(num);									//Q4
	printf("\n");

	float salary;
	printf("Enter a salary : ");
	scanf("%f",&salary);
	calcSal(salary);								//Q5
	printf("\n");
	
	
	char gender;
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("How do you identify yourself? (m/f): ");
	fflush(stdin);
	scanf("%c",&gender);
	
	isEligible(gender,age);								//Q6
	printf("\n");
}

//function definition
void isEligible(char gender,int age)
{
	if((age >= 21 && (gender == 'm' || gender == 'M')) || (age >= 18 && (gender == 'f' || gender == 'F')))
		printf("You are eligible to marry\n");
	else
		printf("You are not eligible to marry\n");
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
	printf("Total Salary = %.2f\n", totalSal);
}

void evenOdd(int num)
{	
	if(num%2==0)
		printf("%d is even no\n",num);
	else
		printf("%d is odd number\n",num);
}

void cToF(float c)
{
	float f = (c * 9 / 5) + 32;
	printf("%0.2f celsius = %0.2f fahrenheit\n", c, f);
}

void areaAndPerimOfRect(float length,float breadth)
{
	float area = length * breadth;
	float perimeter = (length + breadth) * 2;
	
	printf("Area of rectangle = %.2f\n",area);
	printf("Perimeter of rectangle = %.2f\n",perimeter);
	
}

void areaAndCircOfCircle(float radius)
{
	float pi=3.14;
	
	float area = pi * radius * radius;
	float circumference = 2 * pi * radius;
	
	printf("area of circle = %.2f\n",area);
	printf("Circumference of circle = %.2f\n",circumference);
	
}

void countOfNumber(int num)
{
	int count = 0;
	while(num > 0)
	{
		count++;
		num = num/10;
	}
	printf("count of digits = %d\n",count);
	
}

void sumOfDigit(int num)
{
	int rem, sum = 0;
	while(num>0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}
	printf("Sum = %d\n", sum);
	
}

void reverseNumber(int num)
{
	int rev = 0;
	while(num >0)
	{
		int rem = num % 10;
		rev = rev * 10 + rem;
		num/=10;
	}
	printf("Reversed number : %d",rev);
	
	
}

