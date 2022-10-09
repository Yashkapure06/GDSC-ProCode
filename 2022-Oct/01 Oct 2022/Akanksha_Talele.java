import java.util.Scanner;
public class Akanksha_Talele
{
    public static void main(String args [])
    throws StringIndexOutOfBoundsException
    {
        String str, reverse_str = "";
        int len;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enetr the String = ");
        str = sc.nextLine();
        len = str.length();
        for(int i=len-1; i>=0; i--)
        {
            reverse_str = reverse_str+str.charAt(i);
        }
        if(str.equals(reverse_str))
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Not Palindrome");
        }
         
    }
}
