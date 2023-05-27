import java.util.Scanner;
// A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself. Write all Armstrong numbers between 100 to 500.
public class EightArmstrong {

    static int armstrong(int num){
        int sum=0,cube=0;
        while(num!=0){
            sum = num%10;
            cube += (sum*sum*sum);
            num/=10;
        }
        return cube;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num,cube=0,org;
        // System.out.println("Enter a number: ");
        // num = sc.nextInt();
        sc.close();
        for(int i=100;i<=500;i++){
            num = i;
            org = num;
            cube = armstrong(num);
            if(cube==org){
                System.out.println(num + " is Armstrong number.");
            }
            // else{
            //     System.out.println(num + " is not Armstrong number.");
            // }
        }
    }
}
