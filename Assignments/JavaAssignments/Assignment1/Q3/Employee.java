
public class Employee {

	private int eId;
	private String name;
	private double annualSalary;
	
	public Employee(int eId, String name, double annualSalary) 
	{
		this.eId = eId;
		this.name = name;
		this.annualSalary = annualSalary;
	}

	public int geteId() 
	{
		return eId;
	}

	public String getName() 
	{
		return name;
	}

	public double getAnnualSalary() 
	{
		return annualSalary;
	}
	
	
}
