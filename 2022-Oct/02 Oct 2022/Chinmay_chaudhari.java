import java.util.*;
import java.io.*;
 
public class Chinmay_chaudhari
{
    public static void main(String args[])
    {
        System.out.print("Enter a valid string : ");
        
        Scanner sc = new Scanner(System.in);
        
        //Accepting a String
        
        String str = sc.nextLine();
        
        //Let uppercase count be 0 initially
        
        int upper = 0;
 
        for(int i = 0; i < str.length(); i++)
        {
            //traverse through string
            char ch = str.charAt(i);
        
            if (ch >= 'A' && ch <= 'Z'){
                
                //if character is between range of ASCII of capitals the uppercase count++
                upper++;
                
            }
            
        }
 
     
        System.out.println("Upper case letters : " + upper);
    }
}
