import java.util.Scanner;

public class GreatestNumber 
{
	public static void main(String ar[])
	{
		Scanner s=new Scanner(System.in);
		System.out.println("-------GREATEST NUMBER--------");
		System.out.println("Enter 3 numbers");
		int a=s.nextInt();
		int b=s.nextInt();
		int c=s.nextInt();
		int temp;
		if(a>b)
		{
			if(a>c)
			{
				System.out.println("The greatest number is "+a);
			}
			else
			{
				System.out.println("The greatest number is "+c);
			}
		}
			else
		{
			if(b>c)
			{
				System.out.println("The greatest number is "+b);
			}
			else
			{
				System.out.println("The greatest number is "+c);
			}
		}
		
	}

}
