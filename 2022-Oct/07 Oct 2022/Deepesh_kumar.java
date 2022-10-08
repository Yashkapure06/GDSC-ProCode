
import java.util.Scanner;
class Deepesh_kumar
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String str = sc.nextLine();
        String arr[] = str.split(" ");
        String largest = "";
        for(int i = 0; i < arr.length; i++)
        {
            String temp = arr[i];
            String rev = "";
            for(int j = temp.length() - 1; j >= 0; j--)
            {
                rev = rev + temp.charAt(j);
            }
            if(temp.equals(rev))
            {
                if(temp.length() > largest.length())
                {
                    largest = temp;
                }
            }
        }
        System.out.println(largest);
        sc.close();
    }
}