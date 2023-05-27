import java.util.Scanner;
// Write a C program to print all prime number in between 1 to 100.
public class NinePrimeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int countCheck=0;

    for(int i=2;i<=100;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                countCheck++;
            }
        }
        if(countCheck>1){
            countCheck=0;
        }
        else{
            System.out.println(i+" is prime number.");
        }
    }


        sc.close();
    }
}
