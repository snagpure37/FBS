#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter %d elements in the array : ",size);
	int i;
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	
	int num;
	printf("Enter the number you want to search : ");
	scanf("%d",&num);
	
	for(i=0; i<size; i++)
	{
		if(num == arr[i])
		{
			printf("%d found at index %d\n",num,i);
			break;
		}		
	}
}






