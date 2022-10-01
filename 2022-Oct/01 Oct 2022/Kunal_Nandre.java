import java.util.Scanner;
public class Main
{
  public static void main (String[]args)
  {
    Scanner sc = new Scanner (System.in);
    String n = sc.nextLine();
    String rev="";
    
    for(int i=n.length()-1;i>=0;i--){
        rev = rev+n.charAt(i);
    }
    
    if(rev.equals(n)){
        System.out.println("Palindrome");
    }else{
        System.out.println("NO");
    }
  }
}
