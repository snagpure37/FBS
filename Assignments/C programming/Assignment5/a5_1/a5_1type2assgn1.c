#include<stdio.h>
//function declaration
float cToF();
float area();
float perimeter();
float calcSal();
int isEligible();
int sumOfDigit();
int reverseNumber();
int evenOdd();

void main()
{
	//function call
	float res = cToF();
	printf("%.2f fahrenheit\n\n", res);					//Q1
	
	char ch;
	printf("A/P : ");
	fflush(stdin);
	scanf("%c",&ch);
	fflush(stdin);
	float a,p;
	if(ch == 'a' || ch == 'A')
	{
		a = area();
		printf("area = %f\n",a);
	}
	else
	{
		p = perimeter();
		printf("Perimeter = %f\n",p);
	}													//Q2
	printf("\n");
	
	printf("Sum of digits = %d\n",sumOfDigit());		
	printf("reversed number = %d\n",reverseNumber());	//Q3
	printf("\n");
	
	evenOdd() ? printf("It is even number \n") : printf("it is odd number \n");		//Q4
	printf("\n");
	
	printf("Total income= %f\n\n",calcSal());			//Q5
	printf("\n");

	isEligible() ? printf("You can Marry\n") : printf("You cannot marry\n");		//Q6
	
}

//function definition
int isEligible()
{
	char gender;
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("How do you identify yourself? (m/f): ");
	fflush(stdin);
	scanf("%c",&gender);
	
	if((age >= 21 && (gender == 'm' || gender == 'M')) || (age >= 18 && (gender == 'f' || gender == 'F')))
		return 1;
	else
		return 0;
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
	float totalSal = sal + da + ta + hra;
	return totalSal;
//	printf("Total Salary = %.2f\n", totalSal);
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

float cToF()
{
	float f, c;
	
	printf("Enter temperature in celcius : ");
	scanf("%f",&c);
	
	f = (c * 9 / 5) + 32;
	return f;
}

float area()
{
	char shape;
	printf("Circle/Rectangle (c/r) : ");
	scanf("%c",&shape);
	fflush(stdin);
	
	if(shape == 'c' || shape == 'C')
	{
		float radius, pi=3.14;
		printf("Enter value for radius : ");
		scanf("%f",&radius);
		
		return (pi * radius * radius);
	}
	else if(shape == 'r' || shape == 'R')
	{
		float length,breadth;
		printf("Enter length and breadth : ");
		scanf("%f%f",&length,&breadth);
		
		return length * breadth;
	}
}

float perimeter()
{
	char shape;
	printf("Circle/Rectangle (c/r) : ");
	fflush(stdin);
	scanf("%c",&shape);
	fflush(stdin);
	
	if(shape == 'c' || shape == 'C')
	{
		float radius, pi=3.14;
		printf("Enter value for radius : ");
		scanf("%f",&radius);
		
		return (2 * pi * radius);
	}
	else if(shape == 'r' || shape == 'R')
	{
		float length,breadth;
		printf("Enter length and breadth : ");
		scanf("%f%f",&length,&breadth);
		
		return ((length + breadth) * 2);
	}
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

int sumOfDigit()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	int rem, sum = 0;
	while(num>0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}
//	printf("Sum = %d\n", sum);
	return sum;
	
}

int reverseNumber()
{
	int num,rem,rev = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem = num%10;
		rev = rev * 10 + rem;
		num/=10;
	}
	return rev;
	
}

