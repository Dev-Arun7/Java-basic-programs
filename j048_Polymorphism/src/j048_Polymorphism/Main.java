package j048_Polymorphism;

public class Main 
{
	public static void main(String[] args) 
	{
		India p1 = new India();
		Delhi d1 = new Delhi();
		India p2 = new Delhi();
		India p3 = new Kerala();
		
		
		p1.speak();
		d1.speak();
		p2.speak();
		p3.speak();
		d1.write();
		
	}

}
