/*
Input : str1 = "ABC"
Output : "ABC AB AC A BC B C   "

Input : str1 = "AB"
Output : "AB A B  "


Input : str1 = "A"
Output : "A  "
*/
import java.util.*;
public class AllSubsets {  
    public static void main(String[] args) {  
          
       Scanner sc = new Scanner(System.in);
       String str = sc.next();
        int len = str.length();  
        int temp = 0;  
       
        String arr[] = new String[len*(len+1)/2];  
          
     
        for(int i = 0; i < len; i++)
        {  
       
            for(int j = i; j < len; j++) 
            {  
                arr[temp] = str.substring(i, j+1);  
                temp++;  
            }  
        }  
          
     
        System.out.println("All subsets for given string are: ");  
        for(int i = 0; i < arr.length; i++) {  
            System.out.println(arr[i]);  
        }  
    }  
}  
