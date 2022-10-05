# Problem Statement : 04 Oct 2022


- Accept TWO strings from user & Check if they are ANAGRAM or NOT<br>
<br>

> An Anagram of a string is another string that contains the same characters, only the order of characters can be different.
> For example, “abcd” and “dabc” are an Anagram of each other.

<br><br>


```
Input : str1 = "abcde"      str2 = "cebad"
Output : True

Input : str1 = "test"      str2 = "ttee"
Output : False

Input : str1 = "hello"      str2 = "loleh"
Output : True

Input : str1 = "india"      str2 = "iinda"
Output : True

```


<br>



> JAVA CODE

```
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        String str1 = sobj.nextLine();
        String str2 = sobj.nextLine();

        int[] arr = new int[26];

        // for string 1
        for (int i = 0; i < str1.length(); i++) {
            char ch = str1.charAt(i);
            arr[ch - 'a']++;
        }

        // for string 2
        for (int i = 0; i < str2.length(); i++) {
            char ch = str2.charAt(i);
            arr[ch - 'a']--;
        }

        // check final array
        // all values should be zero (0)
        for (int a : arr) {
            if (a != 0) {
                System.out.println(false);
                return;
            }
        }

        System.out.println(true);
    }
}
```



