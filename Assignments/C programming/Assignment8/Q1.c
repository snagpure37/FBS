#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d elements in array: ",size);
	int i;
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	greatestAmongArray(size,arr);
	smallestAmongArray(size,arr);
}

void greatestAmongArray(int size, int* ptr)
{
	int greatest = ptr[0];
	int i;
	for(i=0; i<size; i++)
	{
		 if(ptr[i] > greatest)
		 	greatest = ptr[i];
	}
	printf("Maximum among the array elements = %d\n",greatest);
	
}

void smallestAmongArray(int size, int* ptr)
{
	int smallest = ptr[0];
	int i;
	for(i=0; i<size; i++)
	{
		 if(ptr[i] < smallest)
		 	smallest = ptr[i];
	}
	printf("Minimum among the array elements = %d\n",smallest);
	
}
