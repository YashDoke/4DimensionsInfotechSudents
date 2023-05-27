import java.util.Scanner;
// Write a function “perfect()” that determines if parameter number is a perfectnumber. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
public class FivePerfectNumber {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int res=0;
        for(int i=1;i<=1000;i++){
            res = 0;
            for(int j=1;j<1000;j++){
                if(i%j==0 && j!=i){
                    res+=j;
                }
            }
            if(res == i)
                System.out.println(res+" is a perfect number.");
        }
        sc.close();
    }
}
