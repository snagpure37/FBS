#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter 5 elements in array : ");
	int i;
	for(i=0; i<5; i++)
		scanf("%d",&arr[i]);
		
	printf("Even numbers : ");
	for(i=0; i<5; i++)
	{
		if(arr[i] % 2 == 0)
			printf("%d ",arr[i]);
		if(i == 5-1)
			printf("\b");
	}
	printf("\n");
	
	printf("Odd numbers : ");
	for(i=0; i<5; i++)
	{
		if(arr[i] % 2 != 0)
			printf("%d ",arr[i]);
		if(i == 5-1)
			printf("\b");
	}
}

