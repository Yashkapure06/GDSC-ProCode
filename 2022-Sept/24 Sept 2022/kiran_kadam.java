import java.util.Scanner;

public class Patern {
    public static void main(String[] args) {
        Scanner sca=new Scanner(System.in);
        System.out.print("Enter number: ");

        int num,j=1,i=1;

        num = sca.nextInt();

        while(i<=num){
            while(j<=num){
                System.out.print(i);
                j++;
            }
            System.out.println(" ");
            j=1;
            i++;
        }
    }
}
