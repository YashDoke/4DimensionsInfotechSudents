import java.util.Scanner;
// A 4 digit number is entered through keyboard. Write a C program to print a new number with digits reversed as of orignal one.
public class Lvl3TwoDigitRev {

    static int rev(int num){
        int res=0;
        for(int i=0;i<4;i++){
            res = num%10+res*10;
            num /= 10;
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.println("Enter a four digit number: ");
        num = sc.nextInt();

        System.out.println("Reversed number is: "+rev(num));
        sc.close();
    }
}
