import java.util.Arrays;
import java.util.Scanner;

public class Akanksha_Talele
{    
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
      
    System.out.print("Enter a String = ");
    String str1 = sc.nextLine();
     
    System.out.print("Enter a String = ");    
    String str2 = sc.nextLine();

    // Compare both string lengths if equal then check
    if(str1.length() == str2.length())
    {
        // String to Char Array conversion
        char[] char1 = str1.toCharArray();
        char[] char2 = str2.toCharArray();

        // sort 
        Arrays.sort(char1);
        Arrays.sort(char2);

        // checking for Anagram
        boolean result = Arrays.equals(char1, char2);
        System.out.println(result);
    }
  }
}
