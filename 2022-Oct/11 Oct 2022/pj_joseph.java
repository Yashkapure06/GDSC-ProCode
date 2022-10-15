import java.util.*;
class PalindromeWords
{    
    public static void main(String arr[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Any String ");
        String str1=sc.nextLine();
        String rev="",word="";
        int count=0;
        str1=str1+" ";
        for(int a=0;a<str1.length();a++)
        {
            if(str1.charAt(a)==' ')
            {
                if(word.equals(rev))
                {
                    count++;
                }    
                rev="";
                word="";
            }
            else
            {
                rev=str1.charAt(a)+rev;
                word=word+str1.charAt(a);
            }
            
        }
        System.out.println("\nNumber of Palindrome Words : "+count);
    }
}
