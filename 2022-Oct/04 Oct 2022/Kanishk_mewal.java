import java.util.*;

public class Kanishk_Mewal {

    static boolean check(String str1, String str2)
    {   
        if(str1.length() != str2.length()) return false;
        HashMap<Character, Integer> map = new HashMap<>();

        //add the characters in hashmap to cross check if they exist in str2 as well
        for(int i = 0; i < str1.length(); i++)
        {
            char c = str1.charAt(i);
            if(map.containsKey(c))
                map.put(c, map.get(c) + 1);
            else
                map.put(c, 1);
        }

        //cross checking the string character by character
        for(int i = 0; i < str2.length(); i++)
        {
            char c = str2.charAt(i);
            if(map.containsKey(c))
            {
                if(map.get(c) == 1)
                    map.remove(c);
                else
                    map.put(c, map.get(c) - 1);
            }
            else{
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        System.out.println(check(str1, str2));
        sc.close();
    }
}