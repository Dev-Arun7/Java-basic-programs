package j053_Abstract1;

public class Dog extends Animal
{
	String name;
	int age;
	void detail()
	{
		System.out.println("I'm a dog");	
		System.out.println("My name is "+name);
		System.out.println("I'm "+age+" Year old");
	}
	@Override
	void noise(int num) 
	{
		for(int i=0;i<num;i++)
		{
			System.out.println("Bouww...");
		}
	}

}
