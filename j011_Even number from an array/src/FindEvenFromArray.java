import java.util.Scanner;

public class FindEvenFromArray 
{
	public static void main(String arg[])
	{
		System.out.println("------EVEN NUMBER FROM AN ARRAY------");
		System.out.println("Enter the size");
		Scanner s=new Scanner(System.in);
		int size=s.nextInt();
		int[] numbers= new int[size];
		
		System.out.println("Enter "+size+" numbers");
		for(int i=0;i<size;i++)
		{
			numbers[i]=s.nextInt();
		}
		
		System.out.println("Even numbers are:");
		for(int i=0;i<size;i++)
		{
			if(numbers[i]%2==0)
			{
				System.out.println(""+numbers[i]);
			}
		}
	}

}
