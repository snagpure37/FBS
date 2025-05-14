#include<stdio.h>

typedef struct Distance
{
	int feet;
	int inch;
}Distance;

void storeDistance(Distance*,int);
void displayDistance(Distance*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Distance dist[size];
	storeDistance(dist,size);
	displayDistance(dist,size);
}

void storeDistance(Distance* dt,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d Distance\n", i+1);
		printf("Enter feet : ");
		scanf("%d",&dt[i].feet);
		
		printf("Enter inch : ");
		scanf("%d",&dt[i].inch);
	}
}

void displayDistance(Distance* dt, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d Distance\n", i+1);
		printf("Distance = %d feet %d inches\n",dt[i].feet, dt[i].inch);
	}
}
