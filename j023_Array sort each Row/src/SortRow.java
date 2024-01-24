import java.util.Scanner;

public class SortRow 
{
	public static void main(String args[])
	{
		System.out.println("--------SORT EACH ARRAY-----------");
		System.out.println("Enter the matrix size:");
		Scanner sc=new Scanner(System.in);
		int row = sc.nextInt();
		int col = sc.nextInt();
		int [][] arr = new int[row][col];
		System.out.println("Enter the datas to the Matrix");
		for(int i =0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				arr[i][j] = sc.nextInt();
			}
		}
		
		
		System.out.println("Enterd Matrix is");
		
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print("  "+arr[i][j]);
			}
			System.out.println();
		}
		
		
		
		//Bubble sort.
		int temp = 0;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				//loop for sorting values in a row
				for(int k=0;k<col-1;k++)
				{
					if(arr[i][k]>arr[i][k+1])
					{
						temp = arr[i][k];
						arr[i][k] = arr[i][k+1];
						arr[i][k+1] = temp;
					}
				}
			}
			System.out.println();
		}
		
		
		System.out.println("Sorted Matrix is");
		
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print("  "+arr[i][j]);
			}
			System.out.println();
		}
		
		
		
	}

}
