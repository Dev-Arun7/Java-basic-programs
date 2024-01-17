import java.util.Scanner;

public class SumOfNumbers 
{
	public static void main(String a[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("PROGRAM ADDING N NUMBERS");
		System.out.println("Enter the limit");
		int limit=sc.nextInt();
		int sum=0;
		
		for(int i=1;i<=limit;i++)
		{
			sum=sum+i;
		}
		
		System.out.println("The sum is"+sum);		
	}
	

}
