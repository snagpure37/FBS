#include<stdio.h>

typedef struct Book
{
	char bName[30];
	int id;
	char author[30];
	double price;
}Book;

void addBook(Book*);
void displayBook(Book*);

void main()
{
	Book book;
	addBook(&book);
	displayBook(&book);
}

void addBook(Book* book)
{
	printf("Enter the book details\n");
	printf("Book Name : ");
	fflush(stdin);
	gets(book->bName);
	
	printf("Book Id : ");
	scanf("%d",&book->id);
	
	printf("Book Author : ");
	fflush(stdin);
	gets(book->author);
	
	printf("Book Price : ");
	scanf("%lf",&book->price);
}

void displayBook(Book* book)
{
	printf("Book Details\n");
	printf("Id = %d\nBook Name = %s\nAuthor Name = %s\nPrice = %.2lf\n",book->id,book->bName,book->author,book->price);
}
