import java.util.Scanner;

public class Asliutkarsh {
    public static void main(String[] args) {
        //Getting Input From Users
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        int max = -1;
        int index = -1;
        String[] s = str.split(" "); //spliting string into different words

        for (int i = 0; i < s.length; i++) {
            if (checkPalindrome(s[i])>0){  //checking if it palindrome or not
                if(checkPalindrome(s[i]) > max){  //checking if the palindrome is longest
                    max = checkPalindrome(s[i]);
                    index = i;
                }
            }
        }
        if (index > 0){
            System.out.println(s[index]);
        }else {
            System.out.println("No Palindrone in it");
        }
    }

    /**
     * Reversing the String
     * @param str
     * @return Reversed String
     */
    public static String reverseString(String str)
    {
        String rev = "";
        for(char ch : str.toCharArray())
        {
            rev = ch + rev;
        }
        return rev;

    }

    /**
     * Cheking if string is Palindrome or not
     * @param str
     * @return length of palindrome string or -1
     */
    public static int checkPalindrome(String str){
        if(str.toLowerCase().equals(reverseString(str).toLowerCase())){
            return str.length();
        }
        return -1;
    }
}