import java.util.Scanner;

public class DigitUnderDiagonal
{
	public static void main(String arg[])
	{
		System.out.println("---------DATAS UNDER THE DIAGONAL----------");
		System.out.println("Enter the Matrix size");
		Scanner sc = new Scanner(System.in);
		int row = sc.nextInt();
		int col = sc.nextInt();
		int[][] arr =new int[row][col];
		System.out.println("Enter the datas to the Matrix");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				arr[i][j] = sc.nextInt();
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
		
		
		
		System.out.println("Datas under the diagonal are");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i>=j)
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
