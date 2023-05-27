// print all natural numbers
public class SevenPrintNaturalNum {
    static int nat(int num, int last){
        if(num==last){
            return num;
        }
        else{
            System.out.print(num+" ");
            num++;
            return nat(num, last);
        }
    }
    public static void main(String[] args) {
        System.out.print(nat(1,20));
    }
}
