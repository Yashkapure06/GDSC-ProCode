///C# Program to print Addition of two n x n matrices

using System;

namespace program
{
    class MatrixAddition
    {
        public static void Main(string[] args)
        {
            int m, n,i,j;
            
            Console.Write("Enter Number Of Rows And Columns Of Matrices A and B : ");
            m = Convert.ToInt16(Console.ReadLine());
            n = Convert.ToInt16(Console.ReadLine());
            
            int[,] A = new int[m,n];
            Console.Write("\nEnter The First Matrix : ");
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    A[i, j] = Convert.ToInt16(Console.ReadLine());
 
            int[,] B = new int[m, n];
            Console.Write("\nEnter The Second Matrix:");
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    B[i, j] = Convert.ToInt16(Console.ReadLine());
                    
            Console.WriteLine("\nMatrix A : ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                    Console.Write(A[i, j] + "  ");
                Console.WriteLine();
            }
            
            Console.WriteLine("\nMatrix B: ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                    Console.Write(B[i, j] + "  ");
                Console.WriteLine();
            }
            
            int[,] C = new int[m, n];
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    C[i, j] = A[i, j] + B[i, j];
                            
            Console.Write("\nSum Matrix :\n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                    Console.Write(C[i, j] + "  ");
                Console.WriteLine();
            }

        }
    }
}