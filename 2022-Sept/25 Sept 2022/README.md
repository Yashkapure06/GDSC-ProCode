# Problem Statement : 25 Sept 2022


- Accept a number from user & print the pattern<br>
(n = 5)


```
*
* *
* * *
* * * *
* * * * *
```

<br>

> JAVA CODE
```
import java.util.*;

public class _25sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
```
