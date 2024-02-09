package j038_Sample;

import java.util.Scanner;

public class Sample
{
	public static void main(String[] args)
	{
		int a,b,c,d;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 4 numbers");
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		d = sc.nextInt();
		
		
		Sum s1 = new Sum();
		Sum s2 = new Sum();

		
		s1.sum(a, b);
		s1.display();
		
		s2.sum(c,d);
		s2.display();
		

	
	}

}
