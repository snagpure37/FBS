void main()
{
	float sellingPrice = 500;		//initialization
	float discount;					//declaration
	float discountPercent;			//declaration
	
	if(sellingPrice <= 500)
		discount = sellingPrice * 0.10;
	else
		discount = sellingPrice * 0.20;
	discountPercent = discount/sellingPrice * 100;
	printf("Selling price = %.2f\n", sellingPrice);
	printf("Discount = %.2f\n", discount);
	printf("discount percentage = %.2f\n", discountPercent); 
}
