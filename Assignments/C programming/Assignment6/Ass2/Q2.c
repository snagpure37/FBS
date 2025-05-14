#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	greatest_Of_Three(&a,&b,&c);
}

void greatest_Of_Three(int* a,int* b, int* c)
{
	if(*a > *b)
		if(*a > *c)
			printf("a = %d is greatest",*a);
		else
			printf("c = %d is greatest",*c);
	else
		if(*b > *c)
			printf("b = %d is greatest",*b);
		else
			printf("c = %d is greatest",*c);
}
