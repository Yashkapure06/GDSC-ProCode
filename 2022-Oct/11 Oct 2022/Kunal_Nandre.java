import java.util.Scanner;
class Kunal_Nandre{
	
	static boolean checkPalin(String word)
	{
		int n = word.length();
		word = word.toLowerCase();
		for (int i=0; i<n; i++,n--)
		if (word.charAt(i) != word.charAt(n - 1))
			return false;	
		return true;
	}
	
	static int countPalin(String str)
	{	
	
		str = str + " ";
		
		String word = "";
		int count = 0;
		for (int i = 0; i < str.length(); i++)
		{
			char ch = str.charAt(i);

			if (ch != ' ')
				word = word + ch;
			else {
				if (checkPalin(word))
					count++;
				word = "";
			}
		}
		
		return count;
	}

	public static void main(String args[])
	{
	    Scanner sc = new Scanner(System.in);
	    String firstword = sc.nextLine();
	    
		System.out.println(countPalin(firstword));
				
	}
}


