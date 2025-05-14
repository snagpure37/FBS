#include<stdio.h>
void main()
{
	int a;				//declaration
	int i = 1;			//initialization
	
	printf("Enter a number : ");
	scanf("%d",&a);
	printf("table of %d is printed : \n", a);
	
	while(i<=10)
	{
		int prod = a * i;
		printf("%d\n",prod);
		i++;	
	}
}
