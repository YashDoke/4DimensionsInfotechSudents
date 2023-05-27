public class digitSum {
    public static void main(String [] args){
        int digit = 1234;
        int res = 0;
        for(int i=0;i<4;i++){
            int num = digit%10;
            digit /= 10;
            res = num + res;
        }
        System.out.println("Sum of digits is: "+res);
    }
}
