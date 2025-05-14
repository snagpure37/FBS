#include<stdio.h>
void main()
{
	float temp;
	printf("Enter a number : ");
	scanf("%f",&temp);
	tempConversion(&temp);
}

void tempConversion(float* c)
{
	float f = (*c * 9 / 5) + 32;
	printf("%.2f celcius = %.2f fahrenheit ",*c,f);	
}
