# Problem Statement : 02 Oct 2022


- Accept a String from user & Calculate Capital Letters from it<br>

```
Input : "ABC"
Output : 3

Input : "AbCdE"
Output : 3

Input : "CoDing MET"
Output : 5

```


> JAVA CODE

```
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(calculateCapitals(str));
        
    }

    public static int calculateCapitals(String str)
    {
        int ans = 0;
        for(char ch : str.toCharArray())
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                ans++;
            }
        }
        return ans;
    }
}
```



