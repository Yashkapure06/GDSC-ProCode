import java.lang.*;
import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		String str = s.nextLine();
        StringBuilder[] arr = new StringBuilder[100];
        String a ;
        
		StringTokenizer st = new StringTokenizer(str," ");  
        int i = 0;
        while (st.hasMoreTokens()) {  
            
            
            a = st.nextToken();
            
            StringBuilder ar = new StringBuilder();
            ar.append(a);
            ar.reverse();
            System.out.print(ar + " ");
        }
	}
}
