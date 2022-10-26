import java.util.*;

public class Nandhika{
	
	static void transpose(int A[][], int B[][], int row, int col){
		int i, j;
		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				B[i][j] = A[j][i];
	}

	public static void main(String args[])
	{
	    Scanner sc = new Scanner(System.in);
	    
	    System.out.println("Enter the number of rows and columns: ");
	    int row = sc.nextInt();
	    int col = sc.nextInt();
		
		int A[][] = new int[row][col];
		
		System.out.println("Enter the elements: ");
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
                A[i][j] = sc.nextInt();
        }
        
		int B[][] = new int[row][col];

		transpose(A, B, row, col);

		System.out.print("Result matrix is \n");
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++)
				System.out.print(B[i][j] + " ");
			System.out.print("\n");
		}
	}
}
