package j010_Array;

import java.util.Scanner;

public class Array 
{
	public static void main(String args[])
	{
		System.out.println("-----------ARRAY---------");
		System.out.println("Enter the array size:");
		Scanner s=new Scanner(System.in);
		int limit=s.nextInt();
		int[] numbers= new int[limit];
		System.out.println("Enter "+limit+" numbers to the array");
		for(int i=0;i<limit;i++)
		{
			numbers[i]=s.nextInt();
		}
		System.out.println("Enterd values are:");
		for(int i=0;i<limit;i++)
		{
			System.out.println(+i+": "+numbers[i]);
		}
		
	}

}
