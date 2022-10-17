import java.util.*;
public class RatiJindal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inp = sc.nextLine();
        System.out.println("Enter Array Element as String");
        String[] inparr = inp.split(" ");
        int a[] = new int[inparr.length];
        int i=0;
        for (String x:inparr) {
            a[i] = Integer.parseInt(x);
            i++;
        }
        System.out.println("Enter no of rotation");
        int k = sc.nextInt();
        rotateArray(a,k);
        print(a);
    }

    public static int[] rotateArray(int a[],int k){
        int n = a.length,i=0;
        k = k% n;

        if(k==0 || a.length ==0 || a.length==1){
            return a;
        }

        int s[] = new int[k];

        for (int j = n-k;j<n;j++){
            s[i]=a[j];
            i++;
        }

        for (int j = n-1; j>=k;j--){
            a[j] = a[j-k];
        }
        for (int j = 0;j<s.length;j++){
            a[j]=s[j];
        }

        return a;
    }

    public static void print(int[] arr){
        for (int x:arr) {
            System.out.print(x+" ");
        }
    }
}