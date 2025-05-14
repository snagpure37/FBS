#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	numRange(&num);
}

void numRange(int* n)
{
	printf("%d ",*n);			//n = address of num	//*n = value at the address of num
	int i;
	for(i = 1;i <= *n; i++)
		printf("%u ",i);
}


