import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i=1; i<=n; i++){
		    for(int j=1; j<=n; j++){
		        char ch = 'z';
		        if(j<=n-i+1){
		             
              System.out.print((char)(ch-j+1));
		             System.out.print(" ");
		        }
		        else{
		             System.out.print(" ");
            }
		    }
		    System.out.println();
		}	
	}
}
