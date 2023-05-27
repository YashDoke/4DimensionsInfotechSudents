
// Find prime in give interval using function
public class ThreePrimeInGiven {
    static void prime(int num, int num1){
        int count=0;
        for(int i=num;i<=num1;i++){
            count=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count>1){
                System.out.println(i+" is not prime.");
            }
            else{
                System.out.println(i+" is prime.");
            }
        }
    }
    public static void main(String[] args) {
        prime(3,40);
    }
}
