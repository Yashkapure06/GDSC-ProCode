import java.util.Scanner;

public class Star_Pattern {
    public static void main(String[] args) {
        Scanner src=new Scanner(System.in);
        int num= src.nextInt();
        int i=1,j=1;
        while(i<=num){
            while (j<=i){
                System.out.print("* ");
                j++;
            }
            i++;
            j=1;
            System.out.println(" ");
        }
    }
}
