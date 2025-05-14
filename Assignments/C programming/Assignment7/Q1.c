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
		
	int greatest = arr[0];
	int smallest = arr[0];
	for(i=0; i<size; i++)
	{
		if(arr[i] > greatest)
			greatest = arr[i];
		if(arr[i] < smallest)
			smallest = arr[i];
	}
	printf("Maximum among the array elements = %d\n",greatest);
	printf("Minimum among the array elements = %d\n",smallest);
}
