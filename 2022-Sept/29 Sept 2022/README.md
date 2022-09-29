# Problem Statement : 29 Sept 2022


- Accept a number from user & print the pattern<br>
(n = 5)


```
z y x w v 
z y x w 
z y x 
z y 
z
```

> JAVA CODE

```
public class _29sept
{
    public static void main(String[] args) {
        int n = new Scanner(System.in).nextInt();

        for(int i = 1; i <= n; i++)
        {
            char ch = 'z';
            for(int j = n; j >= i; j--)
            {
                System.out.print(ch-- +" ");
            }
            System.out.println();
        }
    }
}
```



