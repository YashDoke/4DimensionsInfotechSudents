import java.util.Scanner;
// Take values of length and breadth of a rectangle from user and check if it is square or not.
public class OneRectangleLengthIsSquare {

    public static int sqre(int val){
        int res=0,result=0;
        for(int i=2;i<val;i++){
            res = val%i;
            if((res*res==val)){
                result=1;
                System.out.println("Length is a square of: "+res);
                break;
            }
            else{
                result=0;
            }
        }
        return result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Length of rectangle: ");
        int len = sc.nextInt();
        System.out.println("Enter Breadth of rectangle: ");
        int bre = sc.nextInt();

        // finding if they are square or not
        if(sqre(len)==1){
            System.out.println("Length is square");
        }
        else{
            System.out.println("Length is not square");
        }
        if(sqre(bre)==1){
            System.out.println("Breadth is square");
        }
        else{
            System.out.println("Breadth is not square");
        }
        sc.close();
    }
}
