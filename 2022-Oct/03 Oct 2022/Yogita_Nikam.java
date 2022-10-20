import java.util.*;
import java.io.*;
public class Yogita_Nikam
{   
    public static void main(String[] args) {    
        
        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter a valid string : ");
        
        String str=sc.nextLine();  
        //lets create StringBuffer for String pool rules
        StringBuffer nStr=new StringBuffer(str);    
            
        for(int i = 0; i < str.length(); i++) 
        {    
                
            //Check for lower case
            
            if(Character.isLowerCase(str.charAt(i))) 
            {    
                
                nStr.setCharAt(i, Character.toUpperCase(str.charAt(i)));    
            }    
            //Check for upper case     
            else if(Character.isUpperCase(str.charAt(i))) 
            {    
                
                nStr.setCharAt(i, Character.toLowerCase(str.charAt(i)));    
            }    
        }    
        System.out.println("final String : " + nStr);    
    }    
}     
