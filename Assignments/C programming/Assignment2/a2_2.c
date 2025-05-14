void main()
{
	int a=20, b=30, c=10;		//initialization
	
	if(a>b)
	{
		if(a>c)
			printf("a = %d is greatest",a);
		else
			printf("c = %d is greatest",c);
	}
	else if(b>c)
		printf("b = %d is greatest",b);
	else
		printf("c = %d is greatest",c);
}
