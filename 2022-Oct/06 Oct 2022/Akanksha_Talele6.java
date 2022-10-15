import java.util.Scanner;
public class Akanksha_Talele6
{
    public static void main(String[] args)
    {    
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(reversedWordsFromStr(str));
    }

    public static String reverse_Str(String str)
    {
        String reverse = "";
        for(char c : str.toCharArray())
        {
            reverse = c + reverse;
        }
        return reverse;

    }

    public static String reversedWordsFromStr(String str)
    {
        String s = "";

        for(String word : str.split(" "))
        {
            s += reverse_Str(word)+' ';
        }

        return s;
    }

}
