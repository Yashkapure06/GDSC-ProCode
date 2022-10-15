import java.util.Scanner;
public class Akanksha_Talele5
{
    public static void main(String args[])
    {
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        String w[] = str.split(" ");
        int len = 0;

        for(String word:w)
        {
            if(len < word.length())
                len = word.length();
        }
        System.out.println(len);
    }
}
