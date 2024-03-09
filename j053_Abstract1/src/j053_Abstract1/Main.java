package j053_Abstract1;

public class Main 
{
	public static void main(String ar[])
	{
		Dog d1 = new Dog();
		d1.name = "Chikku";
		d1.age = 7;		
		d1.detail();
		d1.noise(5);
		System.out.println("\n\n");
		
		Cat c1 = new Cat();
		c1.name = "Kari";
		c1.age = 1;
		c1.detail();
		c1.noise(3);
		
		
	}

}
