import java.util.Scanner;

public class MinMax 
{
	public static void main(String args[])
	{
		System.out.println("---------MIN & MAX---------");
		System.out.println("Enter the size");
		Scanner s=new Scanner(System.in);
		int size=s.nextInt();
		System.out.println("Enter "+size+" numbers");
		int[] numbers=new int[size];
		for(int i=0;i<size;i++)
		{
			numbers[i]=s.nextInt();
		}
		
		
		
		//set min and max values as first element of array temporarily.
		int min=numbers[0];
		int max=numbers[0];  
		
	    for(int i=0;i<size;i++)
		{
			if(numbers[i]<min)
			{
				min=numbers[i];
			}
			if(numbers[i]>max)
			{
				max=numbers[i];
			}
		}
		
		
		System.out.println("Min value is:"+min);
		System.out.println("Max value is:"+max);
	}

}
