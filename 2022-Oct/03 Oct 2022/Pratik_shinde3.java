import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;


public class Pratik_shinde3 {


    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String s1= sc.nextLine();
        char c;
        String str="";


        for (int i=0;i<s1.length();i++){
            c = s1.charAt(i);


            if (Character.isUpperCase(c)) {
                c = Character.toLowerCase(c);
            }


            else if (Character.isLowerCase(c)) {
                c = Character.toUpperCase(c);
            }
            str=str+c;
        }

        System.out.println(str);

    }
}

