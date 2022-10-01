# Problem Statement : 28 Sept 2022


- Accept a number from user & print the pattern<br>
(n = 5)


```
E D C B A A B C D E 
  D C B A A B C D 
    C B A A B C 
      B A A B 
        A A
```


<br>

> JAVA CODE
```
import java.util.*;

public class _28sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i <= n; i++)
        {
            char ch = (char)('A'+n-1);
            for(int j = 1; j <= n; j++, ch--)
            {
                if(j < i)
                {
                    System.out.print("  ");
                }
                else
                {
                    System.out.print(ch+" ");
                }
            }
            ch++;
            for(int j = n; j >= i; j--)
            {
                System.out.print(ch++ +" ");
            }

            //  for new line 
            System.out.println();
        }
    }
}
```
