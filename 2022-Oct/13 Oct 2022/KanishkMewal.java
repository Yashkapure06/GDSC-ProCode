import java.util.*;
public class KanishkMewal {
    public static void main(String[] args) {

        //preparing my array
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }

        //now time to rotate it
        int temp = arr[0];
        for(int i = 0; i < arr.length-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[arr.length-1] = temp;
        

        //now we print the array
        for(int i = 0; i< arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}
