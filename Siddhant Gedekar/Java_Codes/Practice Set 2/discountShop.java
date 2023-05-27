import java.util.Scanner;

public class discountShop {
    public static void main(String [] args){
        System.out.println("Enter quantity: ");
        int quantity;
        Scanner sc = new Scanner(System.in);

        quantity = sc.nextInt();
        sc.close();
        if(quantity>=1000){
            System.out.println("You get a discount of 10% on "+quantity+" item purchase.\ni.e. "+quantity*0.1+" hence payable amount: "+(quantity-quantity*0.1));
        }
        else{
            System.out.println("No discount on items less than 1000 hence: "+quantity);
        }
    }
}
