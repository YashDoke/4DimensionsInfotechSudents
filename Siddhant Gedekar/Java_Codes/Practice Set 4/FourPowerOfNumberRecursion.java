import java.util.Scanner;
public class FourPowerOfNumberRecursion {
    static int powerOf(int num,int res,int sum){
        if(res==0){
            return sum;
        }
        else{
            sum = num*sum;
            return powerOf(num, res-1,sum);
        }
        // return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(powerOf(2, 3,1));
        sc.close();
    }
}
