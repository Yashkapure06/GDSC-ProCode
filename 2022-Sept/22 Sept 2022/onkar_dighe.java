// Problem Statement : 22 Sept 2022

// Accept a number from user & print the pattern
// Input : 4    3   
// Output :
/*
    *   *   *
    *   *   *
    *   *   *
    *   *   *
*/ 


import java.util.*;
public class onkar_dighe
{
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);

        int rows = sObj.nextInt();
        int cols = sObj.nextInt();

        pattern(rows, cols);
    }

    public static void pattern(int rows, int cols)
    {
        for(int i = 1; i <= rows; i++)
        {
            for(int j = 1; j<= cols; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}