void main()
{
	int num = 123;		//initialization
	int a,b,c,d;		//declaration
	
	a = num/100;		// 3
	d= num %100;		// 74
	b = d/10;			// 7
	c = d%10;			// 4
	int sum = a+b+c;
	int rev = c*100+b*10+a;
	printf("number = %d\n", num);
	printf("sum = %d\n",sum);
	printf("reverse of %d is %d",num,rev);
	
}
