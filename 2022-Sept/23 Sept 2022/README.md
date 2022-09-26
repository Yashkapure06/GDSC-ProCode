# Problem Statement : 23 Sept 2023


- Accept a number from user & print the pattern<br>
(n = 5)


```
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```
<br>

>JAVA CODE
```
import java.util.*;

public class _23sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
```
