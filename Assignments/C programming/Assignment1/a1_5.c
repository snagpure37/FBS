void main()
{
	float basicSal = 23000;		//Initialization
	float ta, da, hra;			//declaration
	
	if(basicSal <= 5000)
	{
		da = basicSal * 0.10;
		ta = basicSal * 0.20;
		hra = basicSal * 0.25;
	}
	else{
		da = basicSal * 0.15;
		ta = basicSal * 0.25;
		hra = basicSal * 0.30;
	}
	float totalSal = basicSal + da + ta + hra;
	printf("total salary = %.2f\n", totalSal);
}
