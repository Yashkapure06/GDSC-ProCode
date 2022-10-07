import java.util.Locale;
import java.util.Scanner;


public class Amaan_Sayyed {


    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String s= sc.nextLine();
        int max_length;
        int res=0;
        int count=0;

        for (int i=0;i<s.length();i++){
            
            if (s.charAt(i)!=' '){
                count++;
            }
            else{
                res=Math.max(res,count);
                count=0;
            }

        }
        max_length=Math.max(res,count);
        System.out.println(max_length);


    }
}
