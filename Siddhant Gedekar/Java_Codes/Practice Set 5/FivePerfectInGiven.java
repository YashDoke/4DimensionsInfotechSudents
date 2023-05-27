// find perfect numbers in given interval
public class FivePerfectInGiven {
    static void perfect(int num){
        int res=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                res += i;
            }
        }
        if(res==num){
            System.out.println(res);
        }
    }
    public static void main(String[] args) {
        for(int i=1;i<200;i++){
            perfect(i);
        }
    }
}
