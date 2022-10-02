/*
Date: 01 Oct 2022

Name:Vaishnavi Gosavi

Problem Statement :
- Accept a String from user & check if Palindrome or NOT<br>
Input : "ABC"
Output : NOT Palindrome

Input : "ABBCCBBA"
Output : Palindrome

Input : "RACECAR"
Output : Palindrome

Inout : "step on no pets"
Output : Palindrome
*/

import java.util.*;

class vaishnavi_gosavi {
    public static void main(String[] args) {
        String St, Rev = "";

        Scanner sc = new Scanner(System.in);
        System.out.println("Input:");
        St = sc.nextLine();

        int length = St.length();

        for (int i = length - 1; i >= 0; i--) {
            Rev += St.charAt(i);
        }
        if (St.equals(Rev)) {
            System.out.println("Output:Palindrome");
        } else {
            System.out.println("Output:Not Palindrome");
        }

    }
}
