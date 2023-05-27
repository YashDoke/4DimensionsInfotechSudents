// find power of a number
public class SixPowerOfNumber {
    static int power(int num, int res, int pow){
        if(pow==0){
            return res;
        }
        else{
            res = num*res;
            return power(num, res, pow-1);
        }
    }
    public static void main(String[] args) {
        System.out.println(power(2, 1, 3));
    }
}

