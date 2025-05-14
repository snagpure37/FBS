#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter 6 elements of array : ");
	int i;
	for(i=0; i<6; i++)
		scanf("%d",&arr[i]);
	
	for(i=1; i<6; i++)
	{
		printf("%d at index %d\n",arr[i],i);
		i++;
	}
}

