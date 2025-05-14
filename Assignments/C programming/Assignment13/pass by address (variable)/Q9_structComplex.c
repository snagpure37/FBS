#include<stdio.h>

typedef struct Complex
{
	int real;
	int imaginary;
}Complex;

void storeComplex(Complex*);
void displayComplex(Complex*);

void main()
{
	Complex cpx;
	storeComplex(&cpx);
	displayComplex(&cpx);
}

void storeComplex(Complex* c)
{
	printf("Enter Complex numbers\n");
	printf("Enter real number : ");
	scanf("%d",&c->real);
	
	printf("Enter imaginary number : ");
	scanf("%d",&c->imaginary);
}

void displayComplex(Complex* c)
{
	printf("Details of Complex numbers\n");
	printf("Complex Number = %d + %di\n",c->real, c->imaginary);
}
