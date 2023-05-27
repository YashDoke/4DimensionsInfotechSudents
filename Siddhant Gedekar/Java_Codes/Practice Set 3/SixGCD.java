import java.util.Scanner;
// Write a C program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.
public class SixGCD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1,num2,gcd=0;
        System.out.println("Enter num1: ");
        num1 = sc.nextInt();
        System.out.println("Enter num2: ");
        num2 = sc.nextInt();
        sc.close();
        int size;
        if(num1>num2){
            size = num1;
        }
        else
            size = num2;
        for(int i=2;i<size;i++){
            if(num1%i==0 && num2%i==0){
                gcd = i;
            }
        }
        System.out.println("The gcd of "+num1+" and "+num2+" is: "+gcd);
    }
}
