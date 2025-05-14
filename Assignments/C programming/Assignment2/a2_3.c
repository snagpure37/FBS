#include<stdio.h>
void main()
{
	int a,b;		
	char ch;
	int res;		//declaration
	
	printf("Enter two numbers : ");
	scanf("%d %d", &a,&b);
	printf("Enter an operator : ");
	fflush(stdin);
	scanf("%c",&ch);
	
	if(ch == '+')
		res = a + b;
	else if(ch == '-')
		res = a-b;
		else if(ch == '*')
			res = a*b;
			else if(ch == '/')
				res = a/b;
				else if(ch == '%')
					res = a%b;
					else 
						printf("Invalid operator");
	printf("%c operator results in %d",ch, res);
}
