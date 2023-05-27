public class GCD {
    public static void main(String[] args) {
        int a = 24;
        int b = 59;
        int max=0;
        for(int i=2;i<24;i++){
            if(a%i==0 && b%i==0){
                max = i;
            }
        }
        System.out.println("GCD of "+a+" and "+b+" is "+max);
    }
}
