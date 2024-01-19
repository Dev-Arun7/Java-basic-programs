package j015_Array;

public class Array 
{
	public static void main(String args[])
	{
		System.out.println("-------ARRAY---------");
		int[][] arr ={{3,2},{5,6},{9,5}};
		
		
		//Printing array in matrix
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[0].length;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
	}

}
