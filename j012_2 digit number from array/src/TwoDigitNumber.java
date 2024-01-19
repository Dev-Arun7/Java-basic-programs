import java.util.Scanner;

public class TwoDigitNumber
{
	public static void main(String args[])
	{
		System.out.println("-----2 DIGIT NUMBERS-----");
		System.out.println("Enter the size");
		Scanner s=new Scanner(System.in);
		int size=s.nextInt();
		int[] numbers=new int[size];
		 
		
		System.out.println("Enter "+size+" numbers");
		for(int i=0;i<size;i++)
		{
			numbers[i]=s.nextInt();
		}
		System.out.println("Two digit numbers are: ");
		for(int i=0;i<size;i++)
		{
			if(numbers[i]>9 && numbers[i]<99)
			{
				System.out.println(""+numbers[i]);
			}
		}
	}

}
