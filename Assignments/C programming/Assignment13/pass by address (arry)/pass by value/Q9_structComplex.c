#include<stdio.h>

typedef struct Complex		//struct definition
{
	int imaginary;
	int real;
}Complex;

Complex store(Complex);		//function declaration
void display(Complex);		//function declaration

void main()
{
	Complex comp;
	comp = store(comp);		//function call
	display(comp);			//function call
}

Complex store(Complex comp)		//function definition
{
	printf("Enter imaginary : ");
	scanf("%d",&comp.imaginary);
	
	printf("Enter real : ");
	scanf("%d",&comp.real);
	
	return comp;
}

void display(Complex comp)		//function definition
{
	printf("complex number = %d + %di\n",comp.real,comp.imaginary);
}
