import java.util.Scanner;


//Amaan Sayyed
public class Amaan_Sayyed {

//    public void isPalindrome(String x){
//
//    }
    public static void main(String[] args) {
        String s;
        char ch;
        System.out.println("Enter a string: ");
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        String rev="";

        //loop for reversing a string
        for (int i=s.length()-1;i>=0;i--){
            ch=s.charAt(i);
            rev=rev+ch;
        }

        //conditional to check if reversed string is equal to original string
        if(s.equals(rev)){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not Palindrome");
        }
    }
}
