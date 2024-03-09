package j046_Sample;

public class SmartPhone 
{
	String brand;
	String model;
	int price;
	
	public void call()
	{
		System.out.println("Calling...."+model);
		
	}
	public void message(String word)
	{
		System.out.println(brand+" "+model+" "+word);
	}
	
	static void message()
	{
		System.out.println("Your message sent...");
	}

}
