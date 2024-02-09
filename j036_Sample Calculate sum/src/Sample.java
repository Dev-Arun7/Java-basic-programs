
public class Sample 
{
	public static void main(String args[])
	{
		Calc obj1 = new Calc();
		Calc obj2 = new Calc();
		
		obj1.num1 = 20;
		obj1.num2 = 40;
		obj2.num1 = 65;
		obj2.num2 = 75;
		
		
		System.out.println("Object 1 calculation");
		obj1.calculateSum();
		obj1.display();
		
		
		
		System.out.println("Object 2 Calculation");
		obj2.calculateSum();
		obj2.display();
		
	}

}
