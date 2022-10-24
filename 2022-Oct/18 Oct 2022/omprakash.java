import java.util.*;

class omprakash{
    public static void main(String[] args) {

        int a[][] = new int[10000][10000];
        int transpose[][] = new int[10000][10000];
        int row ,col;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number of rows and columns of the matrix: ");
        row = in.nextInt();
        col = in.nextInt();

        System.out.println("Enter the matrix elements: ");
        for(int i = 0; i < row ; ++i){
            for(int j = 0; j< col; ++j){
                a[i][j] = in.nextInt();
            }
        }

        System.out.println("The entered matrix is :");
        for(int i = 0; i < row ; ++i){
            for(int j = 0; j< col; ++j){
                System.out.print( a[i][j] + " ");
            }
            System.out.println();
        }

        // transposing matrix
        for(int i = 0; i < row ; ++i){
            for(int j = 0; j < col ; ++j){
                transpose[j][i] = a[i][j];
            }
        }

        System.out.println("The transpose matrix is :");
        for(int i = 0; i < row ; ++i){
            for(int j = 0; j < col ; ++j){
                System.out.print(transpose[i][j]+" ");
                if(j == row -1)
                    System.out.println(" ");
            }
        }
       
        in.close(); 
    }
}