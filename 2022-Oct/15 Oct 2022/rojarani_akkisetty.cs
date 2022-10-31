/// C# Program to rotate the array to left by d places

using System;

namespace Program
{
    public class ArrayRotate
    {
        public static void Main(String[] args)
        {  
            int n = Convert.ToInt16(Console.ReadLine());
            int d = Convert.ToInt16(Console.ReadLine());
            
	        int[] arr = new int[n];
            for (int i = 0; i < n; i++)
		        arr[i] = Convert.ToInt16(Console.ReadLine());
		
	        int[] temp = new int[n];
	
	        // Storing the first d elements of array arr[]
	        // into temp
	        for (int i = 0; i < d; i++)
		        temp[i] = arr[i];

            // Storing the n - d elements of
	        // array arr[] to the front of arr[]
	        for (int i = 0; i < n-d; i++)
		        arr[i] = arr[i+d];
			
	        //Storing the d elements of
	        //array temp[] to end of arr[]
	        for(int i=0;i<d;i++)
                arr[n-d+i]=temp[i];
	
	        //Print the elements of an array
            for (int i = 0; i < n; i++)
	            Console.Write(arr[i].ToString() + " ");
	
        }
    }
}

