# Problem Statement : 01 Oct 2022


- Accept a String from user & check if Palindrome or NOT<br>

```
Input : "ABC"
Output : NOT Palindrome

Input : "ABBCCBBA"
Output : Palindrome

Input : "RACECAR"
Output : Palindrome

Inout : "step on no pets"
Output : Palindrome
```


> JAVA CODE

```
import java.util.*;

public class onkar_dighe
{
    public static void main(String[] args) {
        //input
        Scanner sobj = new Scanner(System.in);


        // Input from user
        String str = sobj.nextLine();

        boolean ans  = isPalindrome(str);

        if(ans == true)
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("NOT Palindrome");   
        }
    }

    public static boolean isPalindrome(String str)
    {
        // Two pointer method
        int left = 0;
        int right = str.length()-1;

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



