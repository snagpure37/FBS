#include<stdio.h>

typedef struct Product
{
	int id;
	char name[30];
	int quantity;
	double price;
}Product;

void storeProduct(Product*,int);
void displayProduct(Product*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Product prod[size];
	storeProduct(prod,size);
	displayProduct(prod,size);
}

void storeProduct(Product* prod,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d Product details\n", i+1);
		printf("Enter id : ");
		scanf("%d",&prod[i].id);
		
		printf("Enter name : ");
		fflush(stdin);
		gets(prod[i].name);
		
		printf("Enter quantity : ");
		scanf("%d",&prod[i].quantity);
		
		printf("Enter price : ");
		scanf("%lf",&prod[i].price);
	}
}

void displayProduct(Product* prod, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d Product\n", i+1);
		printf("Id = %d\n",prod[i].id);
		printf("product name = %s\n",prod[i].name);
		printf("quantity = %d\n",prod[i].quantity);
		printf("price = %.2lf\n",prod[i].price*prod[i].quantity);
	}
}
