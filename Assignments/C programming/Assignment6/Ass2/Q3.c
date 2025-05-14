#include<stdio.h>
void main()
{
	int num1,num2;
	char op;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	
	printf("Enter the operator : ");
	fflush(stdin);
	scanf("%c",&op);
	operation(&num1,&num2,&op);
}

void operation(int* a, int* b, char* ch)
{
	int res;
	if(*ch == '+')
		res = *a + *b;
	else
		if(*ch == '-')
			res = *a - *b;
		else
			if(*ch == '*')
				res = *a * *b;
			else
				if(*ch == '/')
					res = *a / *b;
				else
					if(*ch == '%')
						res = *a % *b;
					else
						printf("Invalid operation");
						
	printf("Result using %c = %d",*ch,res);
}
