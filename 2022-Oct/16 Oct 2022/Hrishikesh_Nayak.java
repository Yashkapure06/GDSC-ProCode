import java.util.Scanner;
class Hrishikesh_Nayak{
    public static void main(String[] args) {
        System.out.print("Enter matrix size:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int A[][]=new int[n][n];
        System.out.println("Enter the first matrix:");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=sc.nextInt();
            }
        }
       int B[][]=new int[n][n];
       System.out.println("Enter the second matrix:");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                B[i][j]=sc.nextInt();
            }
        }
        int res[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=A[i][j]+B[i][j];
            }
        }
        System.out.println("Resulting Matrix:");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print(res[i][j]+" ");
            }
            System.out.println("");
        }
        
    }
}
