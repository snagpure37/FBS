
public class Student {
	
	private int rollNo;
	private String name;
	private double percentage;
	
	public Student(int rollNo, String name, double percentage) 
	{
		this.rollNo = rollNo;
		this.name = name;
		this.percentage = percentage;
	}
	
	public int getRollNo()
	{
		return rollNo;
	}
	
	public String getname()
	{
		return name;
	}
	
	public double getPercentage()
	{
		return percentage;
	}

}
