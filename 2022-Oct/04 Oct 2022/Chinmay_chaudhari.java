/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

import java.util.Arrays;
import java.util.Scanner;

public class Chinmay_chaudhari{
    
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
      
      System.out.print("Enter Valid String : ");
    String str1 = sc.nextLine();
     
    System.out.print("Enter Valid String : ");    
    String str2 = sc.nextLine();


    // Compare both string lengths if equal then check
    
    if(str1.length() == str2.length()) {

    // Convert String to Char Array
      char[] char1 = str1.toCharArray();
      char[] char2 = str2.toCharArray();

      // sort the char array
      Arrays.sort(char1);
      Arrays.sort(char2);

      // if sorted char arrays are same
      // then the string is anagram
      boolean result = Arrays.equals(char1, char2);
      System.out.println(result);
    }
  }
}
