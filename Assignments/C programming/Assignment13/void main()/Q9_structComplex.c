#include<stdio.h>

struct Complex
{
	float real;
	float imaginary;
};

void main()
{
	struct Complex comp;
	
	printf("Enter details of Complex : \n");
	printf("Enter real part : ");
	scanf("%f",&comp.real);
	
	printf("Enter imaginary part : ");
	scanf("%f",&comp.imaginary);
	
	printf("Complex number  = %.2f & %.2f",comp.real,comp.imaginary);
	
}
