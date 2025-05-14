#include<stdio.h>
//function declaration:-
void cToF();
void areaAndPerimOfRect();
void areaAndCircOfCircle();
void countOfNumber();
void sumOfDigit();
void reverseNumber();
void evenOdd();
void calcSal();
void isEligible();


void main()
{
	cToF();						//Q1
	printf("\n");

	areaAndPerimOfRect();
	printf("\n");
	areaAndCircOfCircle();		//Q2
	printf("\n");

	sumOfDigit();
	printf("\n");
	reverseNumber();			//Q3
	printf("\n");

	evenOdd();					//Q4
	printf("\n");

	calcSal();					//Q5
	printf("\n");

	isEligible();				//Q6
	printf("\n");

}


void isEligible()
{
	char gender;
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("How do you identify yourself? (m/f): ");
	fflush(stdin);
	scanf("%c",&gender);
	
	if((age >= 21 && (gender == 'm' || gender == 'M')) || (age >= 18 && (gender == 'f' || gender == 'F')))
		printf("You are eligible to marry\n");
	else
		printf("You are not eligible to marry\n");
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

void cToF()
{
	float f, c;
	
	printf("Enter temperature in celcius : ");
	scanf("%f",&c);
	
	f = (c * 9 / 5) + 32;
	printf("%0.2f celsius = %0.2f fahrenheit\n", c, f);
}

void areaAndPerimOfRect()
{
	float length, breadth;
	
	printf("Enter length and breadth : ");
	scanf("%f%f",&length,&breadth);
	
	float area = length * breadth;
	float perimeter = (length + breadth) * 2;
	
	printf("Area of rectangle = %.2f\n",area);
	printf("Perimeter of rectangle = %.2f\n",perimeter);
	
}

void areaAndCircOfCircle()
{
	float radius, pi=3.14;
	printf("Enter value for radius : ");
	scanf("%f",&radius);
	
	float area = pi * radius * radius;
	float circumference = 2 * pi * radius;
	
	printf("area of circle = %.2f\n",area);
	printf("Circumference of circle = %.2f\n",circumference);
	
}

void countOfNumber()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	int count = 0;
	while(num > 0)
	{
		count++;
		num = num/10;
	}
	printf("count of digits = %d\n",count);
	
}

void sumOfDigit()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int temp = num;
	
	int rem, sum = 0;
	while(num>0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}
	printf("Sum of digits from %d = %d\n",temp, sum);
	
}

void reverseNumber()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int temp = num;
	
	int rev=0;
	while(num>0)
	{
		int rem = num%10;
		rev=rev*10+rem;
		num/=10;
	}
	printf("Reversed number of %d = %d\n",temp,rev);
	
	
}

