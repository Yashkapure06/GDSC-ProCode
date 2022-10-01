import java.util.Scanner;



public class Pratik_Shinde {

    public static void main(String[] args) {
        String s;
        char ch;
        System.out.println("Enter a string: ");
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        String rev="";


        for (int i=s.length()-1;i>=0;i--){
            ch=s.charAt(i);
            rev=rev+ch;
        }

        if(s.equals(rev)){
            System.out.println("It's Palindrome");
        }
        else{
            System.out.println("Not Palindrome");
        }
    }
}