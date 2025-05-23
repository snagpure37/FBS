
public class OverloadComplexMethod {
	
	int real, img;

	public void addComplexNumber(ComplexNumber c1,ComplexNumber c2)
	{
		real = c1.getReal()+c2.getReal();
		img = c1.getImaginary() + c2.getImaginary();
		
		System.out.println("Addition of two Complex numbers = "+real+" + "+img+"!");
	}
	
	public void addComplexNumber(ComplexNumber c1,int no)
	{
		real = c1.getReal() + no;
		img = c1.getImaginary() + no;
		System.out.println("Addition of real number and an integer = "+real+" + "+img+"!");
	}
	
}
