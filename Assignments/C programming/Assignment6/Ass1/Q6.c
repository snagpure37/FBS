#include<stdio.h>
void main()
{
	int age;
	char gender;
	printf("Enter age : ");
	scanf("%d",&age);
	printf("Enter gender(f/m) : ");
	fflush(stdin);
	scanf("%c",&gender);
	is_eligible(&age,&gender);	
}

void is_eligible(int* age,char* gender)
{
	if((*age >= 21 && (*gender == 'm' || *gender == 'M')) || (*age >= 18 && (*gender == 'f' || *gender == 'F')))
		printf("You are eligible to marry ");
	else
		printf("You are not eligible to marry ");
}
