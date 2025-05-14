#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Product
{
	int id;
	char name[30];
	double price;
	int quantity;
}Product;

typedef struct Cart
{
	Product prod;
	int purchaseQuantity;
}Cart;

Product enterItem(int);
Product display(int);
void addToCart(int);
void displayCart();

int prodCount = 0;
int cartCount = 0;
Product* prod;
Cart* cart;

void main()
{
	int noOfProduct;
	printf("Enter the number of product you want to add : ");
	scanf("%d",&noOfProduct);
	prod = (Product*)malloc(sizeof(Product)*noOfProduct);
	
	cart = (Cart*)malloc(sizeof(Cart)*cartCount);
	
	int choice;
	
	do
	{
		printf("\n1.Add Product");
		printf("\n2.Display All Product");
		printf("\n3.Add to cart ");
		printf("\n4.Display cart");
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 :
			{
				enterItem(noOfProduct);
				break;
			}
			case 2 : 
			{
				display(noOfProduct);
				break;
			}
			case 3:
			{
				addToCart(noOfProduct);
				break;
			}
			case 4:
			{
				displayCart(cartCount);
				break;
			}
			default : 
			{
				printf("Invalid input...");
				break;
			}
		}
		printf("\nDo you want to continue ? ");
		printf("\nYes.Enter non zero");
		printf("\nNo.Enter zero\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
	}while(choice != 0);
	
	printf("\nYou exit the Application\n");
}

Product enterItem(int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\nEnter product Id : ");
		scanf("%d",&prod[i].id);
			
		printf("Product name : ");
		fflush(stdin);
		gets(prod[i].name);
		
		printf("Price : ");
		scanf("%lf",&prod[i].price);
		
		printf("quantity : ");
		scanf("%d",&prod[i].quantity);
		prodCount++;
		
		printf("Product %d added\n\n",prodCount);
	}	
}

Product display(int size)
{
	if(prodCount == 0)
	{
		printf("\nNo product found..\n\n");
	}
	int i;
	for(i=0; i<prodCount; i++)
	{
		printf("\n---Product %d Details---\n",i+1);
		printf("Product Id = %d\nName = %s\nPrice = %.2lf\nQuantity = %d\n",prod[i].id,prod[i].name,prod[i].price,prod[i].quantity);
	}
}

void addToCart(int size)
{
	int id;
	printf("\nEnter the product Id to add to cart : ");
	scanf("%d",&id);
	
	int i,j;
	for(i=0; i<size; i++)
	{
		if(id == prod[i].id)
		{
//			printf("Id found..\n");
			cartCount++;
			for(j=0; j<cartCount; j++)
			{
				cart[j].prod.id = prod[i].id;
				
				strcpy(cart[j].prod.name, prod[i].name);
				
				printf("Enter quantity : ");
				scanf("%d",&cart[j].purchaseQuantity);
				
				if(cart[i].purchaseQuantity>prod[i].quantity)
				{
					printf("we have only %d products\n",prod[i].quantity);
				}
				
				cart[j].prod.price = cart[j].purchaseQuantity * prod[i].price;
				
				prod[i].quantity-=cart[j].purchaseQuantity;
				printf("\nProduct added to cart..\n\n");
				
				return;
			}
		}
	}
	printf("Id does not exist...");
}

void displayCart()
{
	int i;
	for(i=0; i<cartCount; i++)
	{
		printf("\n---Cart %d Details---\n",i+1);
		printf("Product Id = %d\nName = %s\nPrice = %.2lf\nQuantity = %d\n",cart[i].prod.id, cart[i].prod.name,cart[i].prod.price,cart[i].purchaseQuantity);
	}
}

