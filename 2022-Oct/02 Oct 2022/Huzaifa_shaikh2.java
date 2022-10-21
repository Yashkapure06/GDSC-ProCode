import java.util.Locale;
import java.util.Scanner;


public class Huzaifa_shaikh2 {


    public static void main(String[] args) {

        int counter=0;

        Scanner sc=new Scanner(System.in);
        String s= sc.nextLine();

        String nospace=s.replaceAll("\\s","");

        String caps=nospace.toUpperCase();

        for (int i =0;i<nospace.length();i++){
            if (nospace.charAt(i)==caps.charAt(i)){
                counter++;
            }
        }
        System.out.println(counter);
    }
}
