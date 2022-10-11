# Problem Statement : 05 Oct 2022


- Accept a string from user and return MAX length of a word from string<br>

```
Input : str1 = "I love my India"
Output : 5

Input : str1 = "Coding is best"
Output : 6

Input : str1 = ""
Output : 0

Input : str1 = "I like to play Cricket"
Output : 7
```




> JAVA CODE

```
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(getMaxLenWord(str));
        
    }


    public static int getMaxLenWord(String str)
    {
        int maxLen = 0;

        for(String word : str.split(" "))
        {
            maxLen = Math.max(maxLen, word.length());
        }

        return maxLen;
    }
}
```



