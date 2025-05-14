#include<stdio.h>
void main()
{
	float price;
	printf("Enter the price ");
	scanf("%f",&price);
	
	char isStudent;
	printf("are you a student : ");
	fflush(stdin);
	scanf("%c",&isStudent);
	
	calculate_discount(&price,&isStudent);
}

void calculate_discount(float* price,char* isStudent)
{
	float discount, discountedPrice;
	if(*isStudent == 'y')
	{
		if(*price >= 500)
			discount = 	*price * 0.20;
		else
			discount = 	*price * 0.10;
	}	
	else
		if(*price >= 600)
			discount = *price * 0.15;
		else
			printf("No discount \n");
	
	printf("Total amount you need to pay : %.2f",*price-discount);
}
