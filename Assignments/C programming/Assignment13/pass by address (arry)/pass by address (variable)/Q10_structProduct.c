#include<stdio.h>

typedef struct Product
{
	int id;
	char name[30];
	int quantity;
	double price;
}Product;

void storeProduct(Product*);
void displayProduct(Product*);

void main()
{
	Product prod;
	storeProduct(&prod);
	displayProduct(&prod);
}

void storeProduct(Product* prod)
{
	printf("Enter Product details\n");
	printf("Enter id : ");
	scanf("%d",&prod->id);
	
	printf("Enter name : ");
	fflush(stdin);
	gets(prod->name);
	
	printf("Enter quantity : ");
	scanf("%d",&prod->quantity);
	
	printf("Enter price : ");
	scanf("%lf",&prod->price);
}

void displayProduct(Product* prod)
{
	printf("Details of Product\n");
	printf("Id = %d\n",prod->id);
	printf("product name = %s\n",prod->name);
	printf("quantity = %d\n",prod->quantity);
	printf("price = %.2lf\n",prod->price*prod->quantity);
}
