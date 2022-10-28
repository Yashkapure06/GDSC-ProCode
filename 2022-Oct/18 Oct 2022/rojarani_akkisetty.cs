/// C# Program to Print the Transpose of a Given Matrix

using System;

namespace Program
{
    class MatrixTranspose
    {
        public static void Main(string[] args)
        {
            int m, n, i, j;

            Console.Write("Enter the Order of the Matrix : ");
            m = Convert.ToInt16(Console.ReadLine());
            n = Convert.ToInt16(Console.ReadLine());
            int[,] A = new int[m, n];

            Console.Write("\nEnter The Matrix Elements : ");
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    A[i, j] = Convert.ToInt16(Console.ReadLine());
            
            Console.WriteLine("\nGiven Matrix : ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                    Console.Write(A[i, j] + "  ");
                Console.WriteLine();
            }
            
            Console.WriteLine("\nTranspose Matrix : ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                    Console.Write(A[j, i] + "  ");
                Console.WriteLine();
            }
        }
    }
}