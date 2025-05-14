#include<stdio.h>

typedef struct Product
{
	int id;
	char name[30];
	int quantity;
	double price;
}Product;

Product storeProduct(Product);
void displayProduct(Product);

void main()
{
	Product prod;
	prod = storeProduct(prod);
	displayProduct(prod);
}

Product storeProduct(Product prod)
{
	printf("Enter product Id : ");
	scanf("%d",&prod.id);
	
	printf("Enter product name : ");
	fflush(stdin);
	gets(prod.name);
	
	printf("Enter product quantity : ");
	scanf("%d",&prod.quantity);
	
	printf("Enter product price : ");
	scanf("%lf",&prod.price);
	
	return prod;
}

void displayProduct(Product prod)
{
	printf("Product Details\n");
	printf("Id = %d\n",prod.id);
	printf("Name = %s\n",prod.name);
	printf("Quantity = %d\n",prod.quantity);
	printf("Price = %.2lf\n",prod.price*prod.quantity);
}
