void main()
{
	int choice;		//declaration
	
	printf("Enter the choice : ");
	scanf("%d", &choice);
	
	if(choice == 1)		//even odd
	{
		int num;
		printf("Enter a number : ");
		scanf("%d", &num);
		
		if(num % 2 == 0)
			printf("%d is even number",num);
		else
			printf("%d is odd number",num);
	}
	else if(choice == 2)		//basic salary
	{
		float basicSal;
		float ta, da, hra;
		printf("Enter basic salary : ");
		scanf("%f",&basicSal);
		
		if(basicSal<=5000)
		{
			da = basicSal * 0.10;
			ta = basicSal * 0.20;
			hra = basicSal * 0.25;
		}
		else
		{
			da = basicSal * 0.15;
			ta = basicSal * 0.25;
			hra = basicSal * 0.30;
		}
		float totalSal = basicSal + da + ta + hra;
		printf("Total Salary = %.2f",totalSal);
	}
	else
	printf("Invalid choice");
}
