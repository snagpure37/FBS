
public class ComplexMain {
	public static void main(String[] args)
	{
		ComplexNumber cNum1 = new ComplexNumber(10,20);
		ComplexNumber cNum2 = new ComplexNumber(20,40);

		OverloadComplexMethod oCM = new OverloadComplexMethod();
		oCM.addComplexNumber(cNum1,cNum2);
		
		oCM.addComplexNumber(cNum1, 10);
	}

}
