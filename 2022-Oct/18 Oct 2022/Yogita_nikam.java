import java.util.Scanner;
class Yogita_nikam
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how many rows you want");
        int r=sc.nextInt();
        System.out.println("Enter how many rows you want");
        int c=sc.nextInt();
        int[][]matrix=new int[r][c];
        System.out.println("Enter "+(r*c)+"values");
        for(int i=0;i<r;i++)
        {
            for( int j=0;j<c;j++)
            matrix[i][j]=sc.nextInt();
            
        }
        System.out.println("original matrix is");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                System.out.println(matrix[i][j]+"\t");
            }
            System.out.println();
        }
        
       System.out.println("The  coverted matrix is");
        
            for(int i=0;i<c;i++)
        {
            for( int j=0;j<r;j++)
            {
                System.out.println(matrix [j][i]+"\t");
            }
            System.out.println();
        }
 
    }  
    }
