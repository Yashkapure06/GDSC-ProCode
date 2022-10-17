
import java.util.Scanner;
public class Akanksha_Talele1
{
    public static void main(String[] args)throws Exception
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
