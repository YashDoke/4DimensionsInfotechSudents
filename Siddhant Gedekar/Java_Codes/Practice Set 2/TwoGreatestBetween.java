import java.util.Scanner;

//Take two int values from user and print greatest among them.

public class TwoGreatestBetween {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int one,two;
        System.out.println("Enter value one: ");
        one = sc.nextInt();
        System.out.println("Enter value two: ");
        two = sc.nextInt();
        if(one<two){
            System.out.println(two + " is greater.");
        }
        else{
            System.out.println(one + " is greater.");
        }
        sc.close();
    }
}
