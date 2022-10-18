import java.util.*;
public class RatiJindal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size:- ");
        int n =sc.nextInt();
        int[][] a = new int[n][n];
        System.out.println("Enter element in A");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        transposeMatrix(a);
    }

    public static void transposeMatrix(int[][] a)
    {
        int temp;
        for(int i=0 ; i<(a.length/2 + 1); i++)
        {
            for(int j=i ; j<(a[0].length) ; j++)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }

        displayMatrix(a);
    }

    public static void displayMatrix(int[][] a){
        for(int i=0 ; i<a.length ; i++)
        {
            for(int j=0 ; j<a[0].length ; j++)
            {
                System.out.print(a[i][j] + " ");
            }

            System.out.println();
        }
    }
}