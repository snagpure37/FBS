#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter 5 elements in array : ");
	int i;
	for(i=0; i<5; i++)
		scanf("%d",&arr[i]);
		
	even_odd(arr,5);
}

void even_odd(int* ptr,int size)
{	
	int i;
	printf("Even numbers : ");
	for(i=0; i<size; i++)
	{
		if(ptr[i] % 2 == 0)
			printf("%d ",ptr[i]);
		if(i == size-1)
			printf("\b");
	}
	printf("\n");
	
	printf("Odd numbers : ");
	for(i=0; i<size; i++)
	{
		if(ptr[i] % 2 != 0)
			printf("%d ",ptr[i]);
		if(i == size-1)
			printf("\b");
	}
}
