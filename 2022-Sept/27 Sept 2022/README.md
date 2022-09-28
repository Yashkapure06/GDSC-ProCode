# Problem Statement : 27 Sept 2022


- Accept a number from user & print the pattern<br>
(n = 5)


```
A 
A B 
A B C 
A B C D 
A B C D E 
```


<br>

> JAVA CODE
```
import java.util.*;

public class _27sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i<= n; i++)
        {
            char ch = 'A';
            for(int j = 1; j <= i; j++)
            {
                System.out.print(ch+" ");
                ch++;
            }
            System.out.println();
        }
    }
}
```
