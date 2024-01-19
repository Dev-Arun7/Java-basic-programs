
public class CircularSwaUp
{
	public static void main(String args[])
	{
		System.out.println("------------CIRCULAR SWAP UP-------------");
		int [][] arr = {{1,1,2,2,},
						{3,3,4,4},
						{5,5,6,6},
						{7,7,8,8}};
		int row = arr.length;
		int col = arr[0].length;
		
		System.out.println("Enterd Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
		int temp = 0;
		
		//Swaping
		
		
		for(int i=0; i<row-1;i++)
		{
			for(int j=0;j<col;j++)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i+1][j];
				arr[i+1][j]=temp;
			}
		}
		
		
		System.out.println("Swaped matrix is");
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
