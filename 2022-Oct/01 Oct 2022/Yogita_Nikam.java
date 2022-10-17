import java.util.Scanner;

public class Yogita_Nikam  {

	public static void main(String[] args)
  {
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter String: ");
		String str=sc.nextLine();
		
		boolean  ans= isPalin(str);
		
		if(ans==true) {
			System.out.println("Palindrome");
		}
		else {
			System.out.println("Not Palindrome");
		}
		
	}
	static boolean isPalin(String str) {
		//We'll be using two ptr approach
    
		int i=0;				        //left ptr
		int j=str.length()-1;		//right ptr
		
		while(i<j) {
			if(str.charAt(i)==str.charAt(j)) {
				i++;
				j--;
			}
			else {
				return false;
			}
			return true;
		}
		return false;
	}

}
