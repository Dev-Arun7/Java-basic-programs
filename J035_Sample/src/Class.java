
public class Class 
{
	public static void main(String args[])
	{
		Sample s1 = new Sample();
		Sample s2 = new Sample();
		
		s1.a = 10;
		s1.b = 30;
		
		s2.a = 65;
		s2.b = 85;
		System.out.println(" Printing S1");
		s1.display();
		System.out.println("Printing S2");
		s2.display();
		
		s1.display1();
		s2.display1();
		
		
	}
	

}
