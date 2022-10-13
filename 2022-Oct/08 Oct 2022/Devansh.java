import java.util.Scanner;
// Java program to print all the permutations
// of the given string
public class Main {
	// Function to print all the permutations of str
	static void printPermutations(String str, String ans)
	{

		// If string is empty
		if (str.length() == 0) {
			System.out.print(ans + " ");
			return;
		}
		for (int i = 0; i < str.length(); i++) {
			// ith character of str
			char ch = str.charAt(i);
			// Rest of the string after excluding
			// the ith character
			String ros = str.substring(0, i) +
						str.substring(i + 1);
			// Recursive call
			printPermutations(ros, ans + ch);
		}
	}

	// Driver code
	public static void main(String[] args)
	{
		String s;
		System.out.println("enter a string");
		Scanner sc = new Scanner(System.in);
		s = sc.nextLine();
		printPermutations(s, "");
	}
}
