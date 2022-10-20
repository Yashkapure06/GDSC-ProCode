import java.util.Scanner;
public class Yogita_Nikam
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
        int cnt = 0;
        for(char ch : s.toCharArray())
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                cnt++;
            }
        }
        return cnt;
    }
}
