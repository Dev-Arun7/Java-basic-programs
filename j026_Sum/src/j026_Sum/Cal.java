package j026_Sum;

public class Cal 
{
	public static void main(String arg[])
	{
		Sum obj1 = new Sum();
		Sum obj2 = new Sum();
		
		obj1.a = 100;
		obj1.b = 200;
		obj2.a = 30;
		obj2.b = 40;
		
		obj1.calulateSum();
		System.out.println("Sum of obje 1");
		obj1.displyaySum();
		
		obj2.calulateSum();
		System.out.println("Sum of obje 2");
		obj2.displyaySum();
		
		
		

		
	}

}
