#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	isStrong(&num);
}

void isStrong(int* no)
{
	int rem, sum=0, fact=1;
		
	int temp = *no;
	while(temp>0)
	{
		rem = temp%10;
		fact = 1;
		while(rem>0)
		{
			fact = fact * rem;
			rem--;
		}
		sum = sum + fact;
		temp /=10;
	}
	if(*no == sum)
		printf("%d is strong number ", *no);
	else
		printf("%d is not strong number ",*no);

}
