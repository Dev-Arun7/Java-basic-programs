import java.util.Scanner;

public class PrimeNumber 
{
	public static void main(String ar[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("------------PRIME NUMBER-------------");
		System.out.println("Enter the number");
		int number=sc.nextInt();
		int flag=0;
		int mod;
		for(int i=2;i<number;i++)
		{
			mod=number%i;
			if(mod==0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			System.out.println("The number isn't Prime");
		}
		else
		{
			System.out.println("The number is a prime");
		}
		
		
	}

}
