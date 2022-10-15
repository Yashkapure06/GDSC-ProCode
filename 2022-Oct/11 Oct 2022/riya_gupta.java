import java.util.*;
class riya_gupta
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        int count = 0;
        String str2 = "";
        for(int i = 0; i < str1.length(); i++)
        {
            if(str1.charAt(i) != ' ')
            {
                str2 = str2 + str1.charAt(i);
            }
            else
            {
                if(isPallindrome(str2))
                {
                    count++;
                }
                str2 = "";
            }
        }
        if(isPallindrome(str2))
        {
            count++;
        }
        if(str1.length() == 0)
        {
            count = 0;
        }
        System.out.println(count);
    }
    public static boolean isPallindrome(String str)
    {
        int i = 0;
        int j = str.length() - 1;
        while(i < j)
        {
            if(str.charAt(i) != str.charAt(j))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
