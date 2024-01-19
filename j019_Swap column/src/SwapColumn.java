import java.util.Scanner;

public class SwapColumn 
{
	public static void main(String args[])
	{
		System.out.println("------SWAP ROW------"); 
		System.out.println(" Enter the matrix size ");
		Scanner sc = new Scanner(System.in);
		int row = sc.nextInt();
		int col = sc.nextInt();
		int [][] arr = new int[row][col];
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
		
		
		System.out.println("Row Swaped matrix is");
		int temp = 0;
		int row1 = 0;
		int row2 = arr[0].length-1;
		for(int i=0;i<row;i++)
		{
			temp = arr[row1][i];
			arr [row1] [i] = arr [row2][i];
			arr [row2] [i] = temp;
			
		}
		
		
		System.out.println("Swaped Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
		
		
		
	}

}
