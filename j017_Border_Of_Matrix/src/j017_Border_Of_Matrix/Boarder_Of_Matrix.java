package j017_Border_Of_Matrix;

public class Boarder_Of_Matrix 
{
	public static void main(String args[])
	{
		System.out.println("--------Boarder of a Matrix-----------");
	
		int[][] arr = {{1,2,3},{4,5,6},{7,8,9}};
		System.out.println("Entered Matrix is");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[0].length;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
		
		
		
		System.out.println("Boarder Matrix is");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[0].length;j++)
			{
				if(i==0 || i==arr.length-1 || j==0 || j==arr[0].length-1)
				{
					System.out.print(" "+arr[i][j]);
				}
				else
				{
					System.out.print("  ");
				}
			}
			System.out.println();
		}
		
	}
	
}
