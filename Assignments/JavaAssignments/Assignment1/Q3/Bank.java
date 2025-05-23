
public class Bank {
	
	private double loan;
	
	public void approveLoan(Student stud)
	{
		if(stud.getPercentage()>80)
		{
			loan = 200000;
		}
		else if(stud.getPercentage()<80 && stud.getPercentage()>60)
		{
			loan = 100000;
		}
		else if(stud.getPercentage()<60 && stud.getPercentage()>40)
		{
			loan = 50000;
		}
		else
		{
			System.out.println("No loan Approved");
			return;
		}
		System.out.println("Congratulations! Student loan approved of "+loan+" Rs");
	}
	
	public void approveLoan(Employee emp)
	{
		if(emp.getAnnualSalary()>=1200000)
		{
			loan = 700000;
		}
		else if(emp.getAnnualSalary()>=1000000 && emp.getAnnualSalary()<1200000)
		{
			loan = 600000;
		}
		else if(emp.getAnnualSalary()>=600000 && emp.getAnnualSalary()<100000)
		{
			loan = 500000;
		}
		else if(emp.getAnnualSalary()>=400000 && emp.getAnnualSalary()<600000)
		{
			loan = 400000;
		}
		else
		{
			System.out.println("No loan Approved");
			return;
		}
		System.out.println("Congratulations! Employee loan approved of  "+loan+" Rs ");
	}
	
}
