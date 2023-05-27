// number reverse using recursion
public class ElevenNumRev {
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
        System.out.println(rev(1234, 0));
    }
}
