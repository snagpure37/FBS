
public class LoanMain {

	public static void main(String[] args) {
		
		Student st = new Student(11,"Sakshi",89.40);
		Employee emp = new Employee(101,"Ashish Gaikwad",1000000);
		
		Bank bank = new Bank();
		bank.approveLoan(st);
		bank.approveLoan(emp);
	}
	
}
