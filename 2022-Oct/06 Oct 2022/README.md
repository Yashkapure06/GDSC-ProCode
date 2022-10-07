# Problem Statement : 06 Oct 2022


- Accept a string from user and reverse words from it<br>

```
Input : str1 = "I love my India"
Output : "I evol ym aidnI"

Input : str1 = "Coding is best"
Output : "gnidoC si tseb"

Input : str1 = ""
Output : ""

Input : str1 = "I like to play Cricket"
Output : "I ekil ot yalp tekcirC"
```


> Dont Reverse the whole string



> JAVA CODE

```
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(getWordsReversed(str));
        
    }

    public static String reverseString(String str)
    {
        String rev = "";
        for(char ch : str.toCharArray())
        {
            rev = ch + rev;
        }
        return rev;

    }

    public static String getWordsReversed(String str)
    {
        String ans = "";

        for(String word : str.split(" "))
        {
            ans += reverseString(word)+' ';
        }

        return ans;
    }
}
```



