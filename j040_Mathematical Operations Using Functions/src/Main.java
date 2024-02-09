import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		System.out.println("-------MATHEMATICAL OPERARTIONS---------");
		System.out.println("1.Addition");
		System.out.println("2.Subtraction");
		System.out.println("3.Multiplication ");
		System.out.println("4.Division ");
		System.out.println("Select your choice: ");
		Scanner sc = new Scanner(System.in);
		int choice = sc.nextInt();
		Math obj1 = new Math();
		Sub obj2 = new Sub();
		Mul obj3 = new Mul();
		Div obj4 = new Div();
		
		
		switch(choice) 
		{
			case 1:
				System.out.println("Addition Selected:");
				System.out.println("Enter two number for addition:");
				int num1 = sc.nextInt();
				int num2 = sc.nextInt();
				obj1.sum(num1, num2);
				break;
			
			case 2:
				System.out.println("Subtaction is selected ");
				System.out.println("Enter two number for Subtraction:");
				num1 = sc.nextInt();
				num2 = sc.nextInt();
				obj2.sub(num1, num2);
				break;
				
			case 3:
				System.out.println("You're selected multiplication");
				System.out.println("Enter two number for Multiplication:");
				num1 = sc.nextInt();
				num2 = sc.nextInt();
				obj3.mul(num1, num2);
				break;
				
			case 4:
				System.out.println("You're selected Division");
				System.out.println("Enter two number for Division:");
				num1 = sc.nextInt();
				num2 = sc.nextInt();
				obj4.div(num1, num2);
				break;
			
				
		}
		
			
				
	}

}
