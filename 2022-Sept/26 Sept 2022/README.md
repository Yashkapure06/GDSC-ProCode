# Problem Statement : 26 Sept 2022


- Accept a number from user & print the pattern<br>
(n = 5)


```
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 
```

<br>

> JAVA CODE
```
import java.util.*;

public class _26sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i<= n; i++)
        {
            for(int j = i; j < i+i; j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
```
