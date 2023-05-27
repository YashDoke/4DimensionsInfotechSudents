import java.util.Scanner;
// Write a function to print prime factor of a number
public class TwoPrimeFactor {

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
        int num;//,count=0;//,res;
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        for(int i=2;i<=num;i++){
            if(num%i==0){
                prime(i);
            }
        }
        sc.close();
    }
}
