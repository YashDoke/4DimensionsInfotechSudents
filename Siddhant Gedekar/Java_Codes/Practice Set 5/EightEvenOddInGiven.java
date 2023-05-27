// print even and odd in given range
public class EightEvenOddInGiven {
    static int evenOdd(int start, int end){
        if(start==end){
            if(start%2==0){
                System.out.println(start+" Even");
            }
            else{
                System.out.println(start+" Odd");
            }
            return start;
        }
        else{
            if(start%2==0){
                System.out.println(start+" Even");
            }
            else{
                System.out.println(start+" Odd");
            }
            return evenOdd(start+1, end);
        }
    }
    public static void main(String[] args) {
        evenOdd(1, 10);
    }
}
