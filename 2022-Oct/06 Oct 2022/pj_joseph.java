import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(getWordsReversed(str));
        
    }

    public static String reverseString(String str)
    {
        String rev = "";
        for(char ch : str.toCharArray())
        {
            rev = ch + rev;
        }
        return rev;

    }

    public static String getWordsReversed(String str)
    {
        String ans = "";

        for(String word : str.split(" "))
        {
            ans += reverseString(word)+' ';
        }

        return ans;
    }
}
