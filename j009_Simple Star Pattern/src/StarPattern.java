import java.util.Scanner;

public class StarPattern 
{
	public static void main(String ar[])
	{
		Scanner s=new Scanner(System.in);
		System.out.println("--------STAR PATTERN---------");
		System.out.println("Enter the size");
		int n=s.nextInt();
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				System.out.print(" *");
			}
			System.out.println("");
		}
		
	}

}
