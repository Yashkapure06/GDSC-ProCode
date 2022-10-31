/// C# Program to rotate the array to left by 1 place

using System;

namespace Program
{
    public class ArrayRotate
    {
        public static void Main(String[] args)
        {  
            int n = Convert.ToInt16(Console.ReadLine());

	        int[] arr = new int[n];
            for (int i = 0; i < n; i++)
		        arr[i] = Convert.ToInt16(Console.ReadLine());
		
	        // Storing the first element of array arr[]
	        // into temp
	        int temp = arr[0];

            // Storing the n - 1 elements of
	        // array arr[] to the front of arr[]
	        for (int i = 0; i < n-1; i++)
		        arr[i] = arr[i+1];
			
	        //Storing temp to end of arr[]
                arr[n-1]=temp;
	
	        //Print the elements of an array
            for (int i = 0; i < n; i++)
	            Console.Write(arr[i].ToString() + " ");
	
        }
    }
}

