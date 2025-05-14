#include<stdio.h>
void main()
{
	float price;
	char isStudent;
	float discount;			//declaration
	
	printf("Enter price : ");
	scanf("%f", &price);
	
	printf("Are you a student (y/n) : ");
	fflush(stdin);
	scanf("%c", &isStudent);
	
	if(isStudent == 'y' || isStudent == 'Y')
	{
		if(price > 500)
			discount = price * 0.20;
		else 
			discount = price * 0.10;
	}
	else if(isStudent == 'n' || isStudent == 'N')
	{
		if(price > 600)
			discount = price * 0.15;
		else
			discount = 0;
	}
	float purchaseAmt = price-discount;
	printf("you need to pay %.2f", purchaseAmt);
}
