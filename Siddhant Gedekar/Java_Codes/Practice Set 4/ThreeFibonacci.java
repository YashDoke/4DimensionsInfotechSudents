import java.util.Scanner;
// Using recursion, write a function to know nth term of a Fibonacci series.
public class ThreeFibonacci {
    static int fibonacci(int num, int num1, int num2, int sum){
        // int num1=0,num2=1,sum=0;
        if(num == 0){
            // System.out.print(sum+" ");
            return 0;
        }
        else{
            sum = num1+num2;
            num1 = num2;
            num2 = sum;
            System.out.print(sum+" ");
            return fibonacci(num-1,num1,num2,sum);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.print("Enter a number: ");
        num = sc.nextInt();

        System.out.print(0+" "+1+" ");
        
        System.out.println("Fibonacci of "+num+" is: "+fibonacci(num, 0, 1, 0));

        sc.close();
    }
}
