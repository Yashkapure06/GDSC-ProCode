import java.util.Arrays;
import java.util.Scanner;

public class Kunal_Nandre {
	
	public static String sortString(String inputString)
	{
		char tempArray[] = inputString.toCharArray();
		Arrays.sort(tempArray);
		return new String(tempArray);
	}
	public static void main(String[] args)
	{   
	    Scanner sc= new Scanner(System.in);
	 
		String inputString1 = sc.nextLine();
		String inputString2 = sc.nextLine();
		
		String outputString1 = sortString(inputString1);
		String outputString2 = sortString(inputString2);
		
		if(outputString1.equals(outputString2)){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
	}
}
