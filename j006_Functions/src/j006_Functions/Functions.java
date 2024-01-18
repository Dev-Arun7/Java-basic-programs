package j006_Functions;

import java.util.Scanner;

public class Functions
{
	public static void main(String a[])
	{
		Scanner s=new Scanner(System.in);
		System.out.println("------------SUM OF TWO NUMBERS-----------");
		System.out.println("Enter the two numbers");
		int num1=s.nextInt();
		int num2=s.nextInt();
		
		
		int result=sum(num1,num2);
		System.out.println("The sum is "+result);
	}
	
	static int sum(int a, int b)
	{
		int result=a+b;
		return result;
		
	} 

}
