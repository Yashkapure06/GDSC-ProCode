import java.util.*;
public class Kanishk_Mewal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        sc.close();
        int count = 0;
        int max_count = 0;
        for(int j = 0; j < str1.length(); j++)
        {
            if(str1.charAt(j) == ' ')
            count = 0;
            else
            {
                count++;
                max_count = Math.max(max_count, count);
            }
        }
        System.out.println(max_count);
    }
}