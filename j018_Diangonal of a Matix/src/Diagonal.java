import java.util.Scanner;

public class Diagonal
{
	public static void main(String args[])
	{
		System.out.println("-----------DIAGONAL OF A MATRIX------------");
		System.out.println("Enter the size or matrx");
		Scanner sc=new Scanner(System.in);
		int row=sc.nextInt();
		int col=sc.nextInt();
		int[][] arr = new int[row][col];
		System.out.println("Enter the datas to the Matrix");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				arr[i][j]=sc.nextInt();
			}
		}
		
		
		
		System.out.println("Enterd Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
		
		
		
		System.out.println("The major diagonal Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i==j)
				{
					System.out.print(" "+arr[i][j]);
				}
				else
				{
					System.out.print("   ");
				}
			}
			System.out.println();
		}
		
		
		System.out.println("The minor diagonal Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i+j==col-1)
				{
					System.out.print(" "+arr[i][j]);
				}
				else
				{
					System.out.print("   ");
				}
			}
			System.out.println();
		}
		
		
		System.out.println("The diagonal Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i==j || i+j==row-1)
				{
					System.out.print(" "+arr[i][j]);
				}
				else
				{
					System.out.print("   ");
				}
			}
			System.out.println();
		}
	}

}
