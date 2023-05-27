// write a program to find if a number is prime, armstrong or perfect.
public class TwoPrimeArmPerf {
    static int cube(int num){
        return num*num*num;
    }
    static int armstrong(int num){
        int res=0,sum=0;
        while(num!=0){
            res = num%10;
            num /= 10;
            sum += cube(res);
        }
        return sum;
    }
    static void prime(int num){
        int count=0;
        for(int i=2;i<num;i++){
            if(num%i==0){
                count++;
            }
        }
        if(count>1){
            count = 0;
            System.out.println(num+" is not prime number.");
        }
        else{
            System.out.println(num+" is prime number.");
        }
    }
    static void perfect(int num){
        int res=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                res += i;
            }
        }
        if(res == num){
            System.out.println(num+" is perfect number.");
        }
        else{
            System.out.println(num+" is not perfect number.");
        }
    }
    public static void main(String[] args) {
        int a = 153;
        if(armstrong(a)==a){
            System.out.println(a+" is armstrong number.");
        }
        prime(a);
        perfect(a);
    }
}
