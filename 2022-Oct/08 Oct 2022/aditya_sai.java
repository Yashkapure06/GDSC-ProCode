import java.util.*;
class permutation{
static void permute(String str, String res)
{   
    if (str.length()==0)
    {
        System.out.print(res+"  ");
        return;
    }
    for(int i=0;i<str.length();i++)
    {
        char ch = str.charAt(i);
        String l_substr=str.substring(0,i);
        String r_substr=str.substring(i+1);
        String rest=l_substr+r_substr;
        permute(rest,res+ch);
    }
}
public static void main(String[] args)
{
    Scanner sc = new Scanner(System.in);
    String str;
    String res="";
    System.out.print("Input : ");
    str=sc.nextLine();
    System.out.print("\nPermutations : ");
    permute(str,res);
    }
}
