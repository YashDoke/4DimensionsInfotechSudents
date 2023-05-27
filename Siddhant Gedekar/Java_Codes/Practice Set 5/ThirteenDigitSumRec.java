// digit sum using recursion
public class ThirteenDigitSumRec {
    static int digitSum(int number, int sum){
        if(number == 0){
            return sum;
        }
        else{
            sum += number % 10;
            number /= 10;
            return digitSum(number, sum);
        }
    }
    public static void main(String[] args) {
        System.out.println(digitSum(1234, 0));
    }
}
