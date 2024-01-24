
public class MirrorImage 
{
	public static void main(String args[])
	{
		System.out.println("-----------MIRROR IMAGE-------------");
		int [][] arr = {{1,2,3,4,},
						{5,6,7,8},
						{9,10,11,12},
						{13,14,15,16}};
		int row = arr.length;
		int col = arr[0].length;
		
		System.out.println("Enterd Matrix is:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print("  "+arr[i][j]);
			}
			System.out.println();
		}
		int temp = 0;
		
		//Mirroring process
		for(int i = 0;i < row;i++)
		{
			for(int j=0;j<col/2;j++)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i][col-1-j];
				arr[i][col-1-j] = temp;
			}
		}
		
		System.out.println("Mirror matrix is ");
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
