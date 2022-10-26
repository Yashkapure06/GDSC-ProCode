import java.util.Scanner;
public class Pratik_shinde5 {

    public static void main(String args[]) {

        String st;
        Scanner sc = new Scanner(System.in);
        st = sc.nextLine();
        String w[] = st.split(" ");
        int length= 0;

        for(String word:w) {

            if(length < word.length())
                length = word.length();
        }
        System.out.println(length);
    }
}
