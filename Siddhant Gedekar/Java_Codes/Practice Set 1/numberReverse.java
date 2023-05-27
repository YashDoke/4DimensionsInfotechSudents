public class numberReverse {
    public static void main(String [] args){
        int number = 51342;
        int res=0;
        for(int i=0;i<5;i++){
            res = number%10+res*10;
            number /= 10;
        }
        System.out.println(res);
    }
}
