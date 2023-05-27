import java.util.Scanner;

// Write a C program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z )

public class Lvl3ThreeCheckCase {
    public static void main(String[] args) {
        String names;
        System.out.print("Enter a character: ");
        Scanner sc = new Scanner(System.in);
        names = sc.next();
        if(names.charAt(0) >= 'a' && names.charAt(0) <= 'z'){
            System.out.println("Belongs to LowerCase.");
        }
        else{
            System.out.println("Belongs to UpperCase.");
        }
        sc.close();
    }
}
