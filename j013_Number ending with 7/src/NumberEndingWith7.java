import java.util.Scanner;

public class NumberEndingWith7 
{
	public static void main(String args[])
	{
		System.out.println("--------NUMBERS ENDING WITH 7--------");
		System.out.println("Enter the size");
		Scanner s=new Scanner(System.in);
		int size=s.nextInt();
		int[] numbers= new int[size];
		
		System.out.println("Enter the "+size+ " numbers");
		for(int i=0;i<size;i++)
		{
			numbers[i]=s.nextInt();
		}
		
		System.out.println("Numbers ending with 7 are");
		for(int i=0;i<size;i++)
		{
			if(numbers[i]%10==7)
			{
				System.out.println(""+numbers[i]);
			}
		}
		
	}

}
