import java.util.Scanner;
// Calculate the sum of digits of a number given by user.
public class SevenDigitSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter at most 7 digit number: ");
        int num,res=0;
        num = sc.nextInt();
        for(int i=0;i<7;i++){
            res = res+num%10;
            num/=10;
            if(num==0)
                break;
        }
        System.out.println("Number sum is: "+res);
        sc.close();
    }
}
