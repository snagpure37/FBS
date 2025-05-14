#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	even_odd(&num);
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	even_odd(&no);
}

void even_odd(int* num)
{
	if(*num % 2 ==0)
		printf("%d is even number \n",*num);
	else
		printf("%d is odd number \n",*num);
}
