
import java.util.Scanner;
public class Count_CapitalLetters
{
    public static void main(String[] args)
    {
        String s;
        int c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enetr your String = ");
        s = sc.nextLine();
        c = countCapitalLetters(s);
        System.out.println(c);
    }

    public static int countCapitalLetters(String s)
    {
        int count = 0;
        for(char ch : s.toCharArray())
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                count++;
            }
        }
        return count;
    }
}
