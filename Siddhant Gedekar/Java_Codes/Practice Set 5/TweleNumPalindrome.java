public class TweleNumPalindrome {
    static int rev(int number, int result){
        if(number==0){
            return result;
        }
        else{
            result = number%10+result*10;
            number /= 10;
            return rev(number, result);
        }
    }
    public static void main(String[] args) {
        int num = 4224;
        if(num==rev(num, 0)){
            System.out.println("Number is a palindrome.");
        }
        else{
            System.out.println("Number is not palindrome.");
        }
    }
}
