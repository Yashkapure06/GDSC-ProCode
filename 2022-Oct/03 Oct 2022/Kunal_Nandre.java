import java.util.Scanner;
public class Kunal_Nandre
{   
    public static void main(String[] args) {    
        
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();  
        
        StringBuffer nStr = new StringBuffer(str);    
            
        for(int i=0; i<=str.length()-1; i++) {    
                
        
             if(Character.isUpperCase(str.charAt(i))) {    
                
                nStr.setCharAt(i, Character.toLowerCase(str.charAt(i)));    
            }    
          
           else if(Character.isLowerCase(str.charAt(i))) {    
                
                nStr.setCharAt(i, Character.toUpperCase(str.charAt(i)));    
            }    
        }    
        System.out.println(nStr);    
    }    
}     
