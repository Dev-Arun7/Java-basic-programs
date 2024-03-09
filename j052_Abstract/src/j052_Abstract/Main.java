package j052_Abstract;

public class Main
{
	public static void main(String args[])
	{
		
		SearchAll a = new SearchAll();
		SearchImage i = new SearchImage();
		SearchVideo v = new SearchVideo();
		
		a.search();
		a.message();
		System.out.println("\n");
		
		
		i.search();
		i.message();
		System.out.println("\n");
		
		v.search();
		v.message();
		
		
		
	}

}
