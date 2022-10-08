// Code Contributed by @PranavAvasthi
import java.util.*;

public class Solution {
	static boolean checkPalin(String word) {
		int n = word.length();
		word = word.toLowerCase();

		for (int i = 0; i < n; i++, n--)
			if (word.charAt(i) !=
					word.charAt(n - 1))
				return false;

		return true;
	}

	static String longestPalin(String str) {
		str = str + " ";

		String longestword = "", word = "";

		int length, length1 = 0;
		for (int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);

			if (ch != ' ')
				word = word + ch;
			else {
				length = word.length();
				if (checkPalin(word) && length > length1) {
					length1 = length;
					longestword = word;
				}

				word = "";
			}
		}

		return longestword;
	}

	public static void main(String args[]) {
        Scanner input = new Scanner(System.in);

		String s = input.nextLine();

		if (longestPalin(s) == "")
			System.out.println("No Palindrome"
							+ " Word");
		else
			System.out.println(longestPalin(s));

        input.close();
	}
}
