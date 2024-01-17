package j004_If;
import java.lang.Thread;
import java.util.Scanner;

public class If 
{
	public static void main(String ar[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("PROGRAM TO FIND NEGATIVE OR POSITIVE");
		System.out.println("Enter the number");
		int num=sc.nextInt();
		
		if(num<0)
		{
			System.out.println("Negative number");
		}
		
		else
		{
			System.out.println("Positive number");
		}
		
	}

}
