package IncomeTax;



import java.util.Scanner;



public class IncomeTax {

	public static void main(String ar[]) {

		Scanner i=new Scanner(System.in);

		System.out.println("Enter your Annual Income : ");

		int a=i.nextInt();

		double sum=0.00d;

		if(a<=250000) {

			System.out.println("no Tax");

		        

		}

		else if(a>250000 && a<500000) {

			sum=(5.0/100)*a;

			System.out.println("Income tax Amound ="+sum);

			

			}

			else if(a>500000) {

				if(a<1000000) {

					sum=(20.0/100)*a;

					System.out.println("Income tax Amound ="+sum);

					

				}

				else if(a>1000000) {

					if(a<5000000) {

						sum=(30.0/100)*a;

						System.out.println("Income tax Amound ="+sum);

						

					}

				}

			}

			

			

		}

		

	}

