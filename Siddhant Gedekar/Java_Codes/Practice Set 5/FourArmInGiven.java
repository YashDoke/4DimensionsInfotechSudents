
// find armstrong number between given interval
public class FourArmInGiven {
    static int cube(int num){
        return num*num*num;
    }
    static int arm(int num){
        int res = 0,sum = 0;
        while(num!=0){
            res = num%10;
            num /= 10;
            sum += cube(res);
        }
        return sum;
    }
    public static void main(String[] args) {
        for(int i=100;i<=500;i++){
            int res = arm(i);
            // System.out.println(res);
            if(res == i){
                System.out.println(res+" is armstrong number.");
            }
            // else{
            //     System.out.println(res+" is not armstrong number.");
            // }
        }
    }
}