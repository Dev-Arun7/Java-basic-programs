import java.util.Scanner;

public class Prime 
{
	public static void main(String[] args) 
	{
		int flag =0;
		System.out.println("-------PRIME OR NOT---------");
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number: ");
		int num = sc.nextInt();
		
		if(num<=1) 
		{
			System.out.println("The number is not a prime number");
		}else
		{
			for(int i=2;i<=num/2;i++) 
			{
				if(num%i==0)
				{
					System.out.println("Not a prime ");
					flag = 1;
					break;
				}
			}
			if(flag==0)
			{
				System.out.println("It's a prime");
			}
				
		}
		
	}

}
