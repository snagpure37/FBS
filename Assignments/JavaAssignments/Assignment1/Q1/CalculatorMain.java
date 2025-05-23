import java.util.Scanner;

public class CalculatorMain {

	public static void main(String[] args) {
		
		Calculator calc = new Calculator();
		
		System.out.println("Addition result :");
		System.out.println("int + int = " +calc.addition(22,10));
		System.out.println("float + float = "+calc.addition(1.5f, 3.2f));
		System.out.println("int + float = " +calc.addition(12, 3.2f));
		System.out.println("float + int = "+calc.addition(1.5f, 22));

		System.out.println("\nSubtraction result :");
		System.out.println("int - int = " +calc.subtraction(22,10));
		System.out.println("float - float = "+calc.subtraction(1.5f, 3.2f));
		System.out.println("int - float = " +calc.subtraction(12, 3.2f));
		System.out.println("float - int = "+calc.subtraction(1.5f, 22));
		
		System.out.println("\nMultiplication result :");
		System.out.println("int * int = " +calc.multiplication(22,10));
		System.out.println("float * float = "+calc.multiplication(1.5f, 3.2f));
		System.out.println("int * float = " +calc.multiplication(12, 3.2f));
		System.out.println("float * int = "+calc.multiplication(1.5f, 22));
		
		System.out.println("\nDivision result :");
		System.out.println("int / int = " +calc.division(22,10));
		System.out.println("float / float = "+calc.division(1.5f, 3.2f));
		System.out.println("int / float = " +calc.division(12, 3.2f));
		System.out.println("float / int = "+calc.division(1.5f, 22));
	}

}
