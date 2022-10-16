import java.util.*;
public class KanishkMewal {
    static boolean isPalindrome(String str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String[] words = str.split(" ");
        int count = 0;
        for(String s : words) {
            if(isPalindrome(s)) count++;
        }
        System.out.println(count);
    }
}