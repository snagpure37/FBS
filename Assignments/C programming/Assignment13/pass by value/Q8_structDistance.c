#include<stdio.h>

typedef struct Distance
{
	int feet;
	int inch;
}Distance;

Distance storeDistance(Distance);
void displayDistance(Distance);

void main()
{
	Distance dist;
	dist = storeDistance(dist);
	displayDistance(dist);
}

Distance storeDistance(Distance dist)
{
	printf("Enter feet and inches : ");
	scanf("%d%d",&dist.feet,&dist.inch);
	
	return dist;
}

void displayDistance(Distance dist)
{
	printf("Distance details\n");
	printf("Distance = %d feet %d inches\n", dist.feet, dist.inch);
}
