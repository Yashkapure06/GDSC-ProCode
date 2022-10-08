# Problem Statement : 07 Oct 2022


- Accept a string from user and Return LARGEST PALINDROME word from it<br>

```
Input : str1 = "This is a racecar"
Output : "racecar"

Input : str1 = "rotator did mistakes"
Output : "rotator"

Input : str1 = "christmas eve is better than noon"
Output : "noon"
```

<br><br>



> JAVA CODE

```
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(getLargestPalindrome(str));
    }

    // Function to get largest palindrome Word from String str
    public static String getLargestPalindrome(String str)
    {
        String ans = "";

        for(String word : str.split(" "))
        {
            if(isPalindrome(word) && word.length() > ans.length())
            {
                ans  = word;
            }
        }

        return ans;
    }


    // Function to check that String is palindrome or NOT
    public static boolean isPalindrome(String str)
    {
        int left = 0, right = str.length()-1;

        while(left < right)
        {
            if(str.charAt(left) != str.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
```



