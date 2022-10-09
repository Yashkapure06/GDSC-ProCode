import java.util.Scanner;

public class ratijindal {

    public static void main(String[] args) {
        //Getting Input From Users
        Scanner sobj = new Scanner(System.in);
        String s = sobj.nextLine();

        int N = s.length(); //length of string
        backtrack(s, 0, N - 1);
    }

    public static void backtrack(String s, int idx, int N) { //backtrack method to print all the output
        if (idx == N)
            System.out.println(s+" ");
        else {
            for (int i = idx; i <= N; i++) {
                s = swap(s, idx, i);
                backtrack(s, idx + 1, N);
                s = swap(s, idx, i);
            }
        }
    }


    public static String swap(String a, int i, int j) { //swapping i and idx character
        char temp;
        char[] charArray = a.toCharArray();
        temp = charArray[i];
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }



}