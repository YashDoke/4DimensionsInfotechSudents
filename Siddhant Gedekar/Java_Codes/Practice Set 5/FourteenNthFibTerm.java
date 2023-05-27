// find Nth fib term using recursion
public class FourteenNthFibTerm {
    static int fib(int num1, int num2, int sum, int end){
        if(end == 0){
            return sum;
        }
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        return fib(num1, num2, sum, end-1);
    }
    public static void main(String[] args) {
        System.out.println(fib(0, 1, 0, 5));
    }
}
