// print odd/even number sum with recursion
public class TenOddEvenSum {
    static int odd(int start, int end, int sum){
        if(start != end){
            if(start%2==1){
                sum += start;
            }
            start++;
            return odd(start, end, sum);
        }
        else{
            if(start%2==1){
                sum += start;
            }
            return sum;
        }
    }
    static int even(int start, int end, int sum){
        if(start != end){
            if(start%2==0){
                sum += start;
            }
            start++;
            return even(start, end, sum);
        }
        else{
            if(start%2==0){
                sum += start;
            }
            return sum;
        }
    }
    public static void main(String[] args) {
        System.out.println(odd(0, 7,0));
        System.out.println(even(0,7,0));
    }
}
