#include<stdio.h>
void main()
{
	char shape;
	printf("Enter a shape : ");
	scanf("%c",&shape);
	shapeChoice(&shape);
}

void shapeChoice(char* sh)
{
	if(*sh == 'c' || *sh == 'C')
	{
		float r;
		printf("Enter a radius : ");
		scanf("%f",&r);
		circle(&r);
	}
	else
		if(*sh == 'r' || *sh == 'R')
		{
			float l,b;
			printf("Enter length and breadth : ");
			scanf("%f%f",&l,&b);
			rectangle(&l,&b);
		}
		else
			printf("Invalid choice");
}

void circle(float* r)
{
	float area = 3.14 * (*r) * (*r);
	float circ = 2 * 3.14 * (*r);
	
	printf("area = %.2f\ncircumference = %.2f",area,circ);
}

void rectangle(float* l, float* b)
{
	float area= (*l) * (*b);
	float perimeter = 2 * ((*l) + (*b));
	
	printf("area = %.2f\nperimeter = %.2f",area,perimeter);
}
