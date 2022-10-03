import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    
	    String str = s.next();
	    
	    int count = 0;
	    for(int i = 0;i<str.length();i++)
	    {
	        char ch=str.charAt(i);
	        if(ch>=65 && ch<=90)
	        {
	            count++;
	        }
	    }
	    System.out.println(count);
	}
}
