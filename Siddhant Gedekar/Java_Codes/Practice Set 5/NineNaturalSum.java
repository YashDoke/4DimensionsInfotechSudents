// find sum of n natural numbers
public class NineNaturalSum {
    static int sumN(int num, int sum){
        if(num==0){
            return sum;
        }
        else{
            sum += num;
            num--;
            return sumN(num, sum);
        }
        // return 0;
    }
    public static void main(String[] args) {
        System.out.println(sumN(100, 0));
    }
}
