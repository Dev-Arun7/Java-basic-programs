package j041_Sample;

public class Hello 
{
	int a = 10;
	static int b =20;
	public static void main(String ar[])
	{
		//System.out.println(a);
		Hello h = new Hello();
		Hello h1 = new Hello();
		h.a = 100;
		h1.a = 200;
		h.b = 50;
		h1.b = 60;
		
		
		
		h.hello();
		System.out.println("b = "+b);
		System.out.println("H.a = "+h.a);
		System.out.println("H1.a = "+h1.a);
		System.out.println("H.b = "+h.b);
		System.out.println("H1.b = "+h1.b);
		
		System.out.println();
	}
	void hello()
	{
		System.out.println("Hi");
	}

}
