import java.util.Scanner;
// Write a C program to find prime factor of a number. If a factor of a number is prime number then it is its prime factor.
public class TenPrimeFactor {
    static void prime(int num){
        int res=0,count=0;
        for(int i=2;i<=num;i++){
            if(num%i==0){
                count++;
                res = i;
            }
        }
        if(count>1){
            count=0;
        }
        else{
            System.out.println("Factor "+res+" is prime");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num;
        num = sc.nextInt();
        for(int i=2;i<=num;i++){
            if(num%i==0){
                prime(i);
                // System.out.println(res+" is ");
            }
        }
        sc.close();
    }
}
