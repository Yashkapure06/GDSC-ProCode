import java.util.Scanner;
public class Yogita_Nikam{
    public static void main(String args[])
    {
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        String w[] = str.split(" ");
        int length= 0;

        for(String word:w)
        {
            if(length < word.length())
                length = word.length();
        }
        System.out.println(length);
    }
}
