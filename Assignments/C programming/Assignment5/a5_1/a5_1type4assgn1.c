#include<stdio.h>
//function declaration
float cToF(float);
float perimofCirc(float);
float areaofRect(float,float);
float areaofCirc(float);
float perimofRect(float,float);
void areaORperimeter(char);
float calcSal(float);
int isEligible(char,int);
int sumOfDigit(int);
int reverseNumber(int);
int evenOdd(int);

void main()
{
//	function call
	float c;
	printf("Enter temperature in celcius : ");
	scanf("%f",&c);
	printf("%.2f celcius = %.2f fahrenheit\n",c, cToF(c));				//Q1
	printf("\n");

	char shape;
	printf("Circle/Rectangle (c/r) : ");
	fflush(stdin);
	scanf("%c",&shape);
	areaORperimeter(shape);												//Q2
	printf("\n");
	
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	printf("Sum of digits in %d = %d\n",num,sumOfDigit(num));
	printf("reversed number = %d\n",reverseNumber(num));				//Q3
	
	evenOdd(num) ? printf("%d is even number \n",num) : printf("%d is odd number \n",num);		//Q4
	printf("\n");
	
	float salary;
	printf("Enter salary : ");
	scanf("%f",&salary);
	printf("Total income= %f\n",calcSal(salary));				//Q5
	printf("\n");

	char gender;
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("How do you identify yourself? (m/f): ");
	fflush(stdin);
	scanf("%c",&gender);
	isEligible(gender,age) ? printf("You can Marry") : printf("You cannot marry");			//Q6
	
}

//function definition
int isEligible(char gender, int age)
{	
	return ((age >= 21 && (gender == 'm' || gender == 'M')) || (age >= 18 && (gender == 'f' || gender == 'F')));
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
	return sal + da + ta + hra;
//	printf("Total Salary = %.2f\n", totalSal);
}

int evenOdd(int num)
{	
	return (num%2==0);
}

float cToF(float c)
{
	return ((c * 9 / 5) + 32);
}

void areaORperimeter(char shape)
{
	if(shape == 'c' || shape == 'C')
	{
		float radius;
		printf("Enter value for radius : ");
		scanf("%f",&radius);
		printf("area of circle = %.2f\n",areaofCirc(radius));
		printf("circumference of circle = %.2f\n",perimofCirc(radius));
	}
	else if(shape == 'r' || shape == 'R')
	{
		float length,breadth;
		printf("Enter length and breadth : ");
		scanf("%f%f",&length,&breadth);
		printf("area of rectangle = %.2f\n",areaofRect(length,breadth));
		printf("perimeter of rectangle = %.2f\n",perimofRect(length,breadth));
	}
}

float perimofCirc(float radius)
{
	return 2*3.14*radius;
}

float perimofRect(float length,float breadth)
{
	return 2*(length+breadth);
}

float areaofCirc(float radius)
{
	return 3.14*radius*radius;
}

float areaofRect(float length,float breadth)
{
	return length*breadth;
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

int sumOfDigit(int num)
{
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

int reverseNumber(int num)
{
	int rem,rev = 0;
	
	while(num>0)
	{
		rem = num%10;
		rev = rev * 10 + rem;
		num/=10;
	}
	return rev;
	
}

