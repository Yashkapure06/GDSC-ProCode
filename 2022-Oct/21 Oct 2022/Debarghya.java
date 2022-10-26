//Squate Matrix Only

import java.util.Scanner;

public class Debarghya{
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of the array(n): ");
        int n;
        n = in.nextInt();
        int[][] a = new int[n][n];
        int[][] b = new int[n][n];

        System.out.println("Enter the elements of the first array: ");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) 
                a[i][j] = in.nextInt();
        }

        System.out.println("Enter the elements of the second array: ");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) 
                b[i][j] = in.nextInt();
        }

        // Mutliplying Two matrices
        int[][] product = new int[n][n];
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Displaying the result
        System.out.println("A*B is: ");
        for(int[] row : product) {
            for (int column : row) {
                System.out.print(column + "    ");
            }
            System.out.println();
        }
    }
}