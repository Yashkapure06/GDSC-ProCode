import java.util.*;
import java.lang.*;
import java.io.*;

class Solution
{
	public static void main(String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		String strs = scan.nextLine();
		
		String[] strs_words = strs.split(" ");
		String word = "";
		int max = 0;
		
		for(int i = 0; i < strs_words.length; i++)
		{
            		boolean temp = isPalindrome(strs_words[i]);
			if(temp == true)
			{
				if(max < strs_words[i].length())
				{
					max = strs_words[i].length();
					word = strs_words[i];
				}
			}
		}
		System.out.println(word);
	}

    	private static boolean isPalindrome(String string) {
        int i = 0, j = string.length() - 1;
 
        while (i < j) 
	{
            if (string.charAt(i) != string.charAt(j))
	    {
                return false;
	    }
            i++;
            j--;
        }
        return true;
    }
}
