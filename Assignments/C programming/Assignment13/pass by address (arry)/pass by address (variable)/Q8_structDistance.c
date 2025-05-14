#include<stdio.h>

typedef struct Distance
{
	int feet;
	int inch;
}Distance;

void storeDistance(Distance*);
void displayDistance(Distance*);

void main()
{
	Distance dist;
	storeDistance(&dist);
	displayDistance(&dist);
}

void storeDistance(Distance* dt)
{
	printf("Enter Distance\n");
	printf("Enter feet : ");
	scanf("%d",&dt->feet);
	
	printf("Enter inch : ");
	scanf("%d",&dt->inch);
}

void displayDistance(Distance* dt)
{
	printf("Details of Distance\n");
	printf("Distance = %d feet %d inches\n",dt->feet, dt->inch);
}
