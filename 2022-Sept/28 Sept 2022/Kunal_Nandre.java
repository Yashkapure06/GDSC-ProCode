import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	 Scanner sc = new Scanner(System.in);
	 
	 int n = sc.nextInt();
	 for(int i=0; i<=n; i++){
	     for(int j=n; j>=1; j--){
	         char ch = 'A';
	         if(j<=n-i){
	             
	             System.out.print((char)(ch+j-1));
	         }
	         else{
	             System.out.print(" ");}
	         }
	        for(int k=1; k<=n-i; ++k){
	         char ch='A';
	         
	         System.out.print((char)(ch+k-1));
	         }
	     System.out.println();
	     }
	    
    }
}
	 
	 
	

