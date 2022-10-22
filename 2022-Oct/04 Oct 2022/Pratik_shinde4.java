import java.util.Arrays;
import java.util.Scanner;

public class Pratik_shinde4 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter String 1 = ");
        String str1 = sc.nextLine();

        System.out.print("Enter String 2 = ");
        String str2 = sc.nextLine();


        if(str1.length() == str2.length())
        {
            // String to Char Array conversion
            char[] char1 = str1.toCharArray();
            char[] char2 = str2.toCharArray();

            Arrays.sort(char1);
            Arrays.sort(char2);

            boolean result = Arrays.equals(char1, char2);
            System.out.println(result);
        }

    }
}

