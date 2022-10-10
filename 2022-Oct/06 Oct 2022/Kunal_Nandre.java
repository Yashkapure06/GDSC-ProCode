import java.util.Scanner;
public class Kunal_Nandre
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
      
        String[] words = str.split(" ");
        String reverseString = "";
        
        for (int i = 0; i < words.length; i++)
        {
            String word = words[i];
            String reverseWord = "";
            for (int j = word.length()-1; j >= 0; j--)
            {
               
                reverseWord = reverseWord + word.charAt(j);
            }
            reverseString = reverseString + reverseWord + " ";
        }
        System.out.println(reverseString);
        sc.close();
    }
}
