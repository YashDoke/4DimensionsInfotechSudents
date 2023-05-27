import java.util.Scanner;
// Write a function to calculate power of a number raised to other. Eg. ab
public class OnePowerOfNumber {
    static int powerOf(int a, int b){
        int res=1;
        for(int i=0;i<b;i++){
            res = a*res;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num=0, p=0;
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        System.out.print("Enter a power: ");
        p = sc.nextInt();
        sc.close();
        int res = powerOf(num, p);
        System.out.println("Result is: "+res);
    }
}
