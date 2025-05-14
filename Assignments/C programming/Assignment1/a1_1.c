#include<stdio.h>
void main() 
{
    float celsius = 37.2;				//initialization
	float fahrenheit;					//declaration
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}
