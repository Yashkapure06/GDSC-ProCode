import java.util.*;
public class RatiJindal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size:- ");
        int n =sc.nextInt();
        int[][] a = new int[n][n];
        int[][] b = new int[n][n];
        System.out.println("Enter element in A");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter element in B");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        int[][] result = new int[][];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }
        }

        System.out.println("Matrix after addition:");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                System.out.print(result[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
