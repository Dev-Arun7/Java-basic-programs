import java.util.Scanner;

public class Main
{
	public static void main(String args[])
	{
		Scanner e = new Scanner(System.in);
		String name;
		int phone;
		System.out.println("Enter name: ");
		name = e.nextLine();
		System.out.println("Enter phone:");
		phone =e.nextInt();
		
		System.out.println(name);
		System.out.println(phone);
	}

}
