# Problem Statement : 03 Oct 2022


- Accept a String from user & convert uppercase letter into lowercase letter and vice versa<br>

```
 Input : "tEsT"
Output : "TeSt"

Input : "mEt GdsC"
Output : "MeT gDSc"

Input : "CoDER"
Output : "cOder"

```


> JAVA CODE

```
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(SwitchCase(str));
        
    }

    public static String SwitchCase(String str)
    {
        String ans = "";

        for(char ch : str.toCharArray())
        {
            if(ch >= 'a' && ch <= 'z')
            {
                ans += (char)(ch-32);
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                ans += (char)(ch+32);
            }
            else
            {
                ans += ch;
            }
        }
        return ans;
    }
}
```



