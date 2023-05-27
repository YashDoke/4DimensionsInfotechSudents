public class digitPlus2 {
    public static void main(String [] args){
        int num = 5696;
        int res = 0;

        for(int i=0;i<4;i++){
            res = num%10+res*10;
            num /= 10;
        }
        num = res;

        for(int i=0;i<4;i++){
            res = num%10 + 2;
            num /= 10;
            System.out.print(res%10);
        }
    }
}
