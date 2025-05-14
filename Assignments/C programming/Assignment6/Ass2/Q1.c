#include<stdio.h>
void main()
{
	float price;
	printf("Enter the original price : ");
	scanf("%f",&price);
	priceOfItem(&price);
}

void priceOfItem(float* price)
{
	float discount;
	if(*price < 500)
		discount = *price * 0.10;
	else
		if(*price < 100)
			discount = *price * 0.15;
		else
			discount = 0;	
	
	printf("you need to pay total amount of = %.2f\n",*price-discount);
}

