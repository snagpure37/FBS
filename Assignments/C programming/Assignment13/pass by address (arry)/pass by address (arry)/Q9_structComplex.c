#include<stdio.h>

typedef struct Complex
{
	int real;
	int imaginary;
}Complex;

void storeComplex(Complex*,int);
void displayComplex(Complex*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Complex cpx[size];
	storeComplex(cpx,size);
	displayComplex(cpx,size);
}

void storeComplex(Complex* c,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d Complex numbers\n", i+1);
		printf("Enter real number : ");
		scanf("%d",&c[i].real);
		
		printf("Enter imaginary number : ");
		scanf("%d",&c[i].imaginary);
	}
}

void displayComplex(Complex* c, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d Complex numbers\n", i+1);
		printf("Complex Number = %d + %di\n",c[i].real, c[i].imaginary);
	}
}
