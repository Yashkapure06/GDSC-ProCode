import java.util.*;
import java.util.Scanner;

public class Kunal_Nandre
{
	static int LongestWordLength(String str)
	{
	int n = str.length();
	int res = 0, curr_len = 0;
	for (int i = 0; i < n; i++)
	{
		if (str.charAt(i) != ' ')
			curr_len++;

		else
		{
			res = Math.max(res, curr_len);
			curr_len = 0;
		}
	}

	return Math.max(res, curr_len);
	}
	public static void main(String[] args)
	{
	    Scanner sc = new Scanner(System.in);
		String str1 = sc.nextLine();
		
		System.out.println(LongestWordLength(str1));
	}
}
