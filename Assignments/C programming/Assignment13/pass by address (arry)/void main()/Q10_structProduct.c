#include<stdio.h>

struct Product
{
	int id;
	char name[50];
	int quantity;
	float price;
};

void main()
{
	struct Product prod;
	
	printf("Enter product Id : ");
	scanf("%d",&prod.id);
	
	printf("Enter product name : ");
	scanf("%s",&prod.name);
	
	printf("Enter product quantity : ");
	scanf("%d",&prod.quantity);
	
	printf("Enter product price : ");
	scanf("%f",&prod.price);
	
	printf("\nProduct details : \n");
	printf("Id = %d\nProduct Name = %s\nQuantity = %d\nPrice = %.2lf",prod.id,prod.name,prod.quantity,prod.price*prod.quantity);
	
	
}
