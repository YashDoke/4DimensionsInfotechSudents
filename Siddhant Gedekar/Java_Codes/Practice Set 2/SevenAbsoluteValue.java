import java.util.Scanner;
// Write a C program to print absolute vlaue of a number entered by user. 

public class SevenAbsoluteValue {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value: ");
        num = sc.nextInt();
        if(num<0){
            System.out.println("Absolute value is: "+num*-1);
        }
        else{
            System.out.println("Absolute value is: "+num);
        }
        sc.close();
    }
}
