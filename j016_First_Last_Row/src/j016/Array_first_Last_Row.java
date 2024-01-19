package j016;

public class Array_first_Last_Row {
	public static void main(String args[])
	{
		System.out.println("--------FIRST AND LAST COLUMN ONLY-------");
		int[][] arr={{3,2},{5,6},{9,5}};
		
		
		System.out.println("Entered Matrix is");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[0].length;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
		
		
		System.out.println("Selected matrix is:");
		
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[0].length;j++)
			{
				if(i==0 || i==arr.length-1)
				{
					System.out.print(" "+arr[i][j]);
				}
			}
			/*This below if condition avoids unwanted new line.
			 * usually for each inner loop there will be a new print line.
			 * The condition now put print line only when it requires
			 */
			if(i==0 || i==arr.length-1)
			{
				System.out.println();
			}
			
		}
	}

}
