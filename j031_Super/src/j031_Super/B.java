package j031_Super;

public class B extends A
{
	int a;
	void display()
	{
		System.out.println("It's B");
		super.display();
	}
	public static void main(String[] args) 
	{
		B b=new B();
		b.display();
		
		
	}

}
