# Problem Statement : 24 Sept 2022


- Accept a number from user & print the pattern<br>
(n = 5)


```
1 1 1 1 1
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4
5 5 5 5 5
```

<br>

>JAVA CODE
```
import java.util.*;

public class _24sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}
```

