import java.util.Scanner;
// Write a C program to calculate factorial of a number.
public class FiveFactorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter factorial number: ");
        int num,res=1;
        num = sc.nextInt();
        sc.close();
        for(int i=1;i<=num;i++){
            res = i*res;
        }
        System.out.println("Factorial is: "+res);
    }
}
