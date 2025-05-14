#include<stdio.h>
void main() 
{
    int age = 28;				//initialization
    char gender = 'm';			//declaration
    
    if (((gender == 'M' || gender == 'm') && age >= 21) || ((gender == 'F' || gender == 'f') && age >= 18))
        printf("Person is eligible to marry\n");
	else 
        printf("Person is not eligible to marry\n");
}



