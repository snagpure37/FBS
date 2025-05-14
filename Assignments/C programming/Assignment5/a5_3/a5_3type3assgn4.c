#include<stdio.h>
//function declaration
void armstrongNums(int, int);
void primeNums(int, int);
void perfectNums(int, int);
void strongNums(int, int);
void fibonacci(int);

void main()
{
//	function call
	int  start, num;
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	
	printf("Enter a number for range : ");
	scanf("%d", &num);
	
	printf("From %d to %d : \n\n",start, num);
	
	printf("Armstrong numbers : ");
	armstrongNums(start,num);		//Q1
	
	printf("Prime numbers : ");
	primeNums(start,num);		//Q2
	
	printf("Perfect numbers : ");
	perfectNums(start,num);		//Q3
	
	printf("Strong numbers : ");
	strongNums(start, num);		//Q4
	
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	printf("series of %d :\n ",no);
	fibonacci(no);				//Q5
	
}

//function definition
void fibonacci(int num)
{
	int fib1=0, fib2=1, fib;
	int i,j;
	for(i=0;i<num;i++)
	{
		if(i<=1)
			fib = i;
		else
		{
			fib = fib1 + fib2;
			fib1=fib2;
			fib2=fib;
		}
		printf("%d ",fib);
	}
	
}

void strongNums(int start, int end)
{
	int temp, rem;
	int tempCount;
	
	int i;
	for(i=start;i<=end;i++)
	{
		temp = i;
		int sum=0;
		while(temp > 0)
		{
			int rem = temp%10;
			int fact = 1;
			while(rem>0)
			{
				fact = fact*rem;
				rem--;
			}
			sum = sum + fact;
			temp /= 10;
			
		}
		if(sum == i)
			printf("%d ",i);
	}
	printf("\n\n");
}

void perfectNums(int start, int end)
{
	int sum;
	
	int i,j;
	for(i = start; i<=end ; i++)
	{
		sum = 0;
		
		for(j = 1; j<i;j++)
		{
			if(i%j == 0)
				sum = sum + j;
		}
		if(i == sum)
			printf("%d ",i);
	}
	printf("\n\n");
}

void primeNums(int start, int end)
{
	int count;
	
	int i,j;
	for(i= start;i<=end;i++)
	{
		count = 0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
				count++;
		}
		if(count == 2)
			printf("%d ",i);
	}
	printf("\n\n");
}

void armstrongNums(int start,int num)
{		
	int sum, count, mul;
	int temp, rem;
	int tempCount;
	
	int i;
	for(i=start; i<=num; i++)
	{
		sum = 0;
		temp = i;
		count = 0;
		while(temp >0)
		{
			count++;
			temp = temp/10;
		}
		temp = i;
		while(temp>0)
		{
			rem = temp%10;
			tempCount = count;
			mul = 1;
			while(tempCount >0)
			{
				mul = mul * rem;
				tempCount--;
			}
			sum = sum + mul;
			temp = temp/10;
		}
		if(sum == i)
			printf("%d ", i);
	}
	printf("\n\n");
		
}
