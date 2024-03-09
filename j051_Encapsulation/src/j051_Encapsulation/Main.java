package j051_Encapsulation;

public class Main
{
	public static void main(String ar[])
	{
		Employee e1 = new Employee();
		e1.setName("Arun");
		e1.setSalary(77000);
		
		System.out.println("Name is: "+e1.getName());
		System.out.println("Salary is "+e1.getSalary());
	}

}
