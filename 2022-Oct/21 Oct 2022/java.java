import java.lang.reflect.Array;
import java.util.Scanner;

class java{
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        int n,m;
        System.out.println("Enter row and column of the matrix");
        n=scanner.nextInt();
        m=scanner.nextInt();
        int[][] first=new int[n][m];
        int[][] second=new int[n][n];
        System.out.printf("Row =%d\nColumn =%d ",n,m);
        System.out.println("Enter value element of first column\n");
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                first[i][j]=scanner.nextInt();
            }
        }
        System.out.printf("\nEnter value of second matrix\n");
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                second[i][j]=scanner.nextInt();
            }
        }

        System.out.println("Sum of two matrix");
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                System.out.printf("%d\t",first[i][j]+second[i][j]);
            }
            System.out.println("");
        }
    }   
}
