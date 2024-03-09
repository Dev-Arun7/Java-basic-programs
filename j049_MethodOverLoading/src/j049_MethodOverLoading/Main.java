package j049_MethodOverLoading;

public class Main 
{
	public void sum(int a,int b)
	{
		System.out.println(a+b);
	}
	public void sum(int x, int y, int z)
	{
		System.out.println(x+y+z);
	}
	
	public void sum(double m, double n)
	{
		System.out.println(m+n);
	}
	
	
	public static void main(String[] args) 
	{
		Main s = new Main();
		s.sum(4,7);
		s.sum(7, 9, 3);
		s.sum(2.3, 3.3);
		
		
	}

}
