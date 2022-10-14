import java.util.Scanner;

public class Akanksha_Talele
{
    public static void main(String[] args)
    {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String = ");
        str = sc.nextLine();
        System.out.println(Change_Case(str));
    }

    public static String Change_Case(String str)
    {
        String new_str = "";

        for(char c : str.toCharArray())
        {
            if(c >= 'A' && c <= 'Z')
            {
                new_str += (char)(c+32);
            }
            else if(c >= 'a' && c <= 'z')
            {
                new_str += (char)(c-32);
            }
            else
            {
                new_str += c;
            }
        }
        return new_str;
    }
}
