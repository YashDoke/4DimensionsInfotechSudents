import java.util.Scanner;

public class FiveSchoolGrades {
    public static void main(String[] args) {
        int a=81,b=60,c=50,d=45,e=25,f=24;
        Scanner sc = new Scanner(System.in);
        float marks;
        System.out.println("Enter your grade: ");
        marks = sc.nextFloat();
        sc.close();

        if(marks>=a){
            System.out.println("Grade A");
        }
        else if(marks<=a && marks>=b){
            System.out.println("Grade B");
        }
        else if(marks<=b && marks>=c){
            System.out.println("Grade C");
        }
        else if(marks<=c && marks>=d){
            System.out.println("Grade D");
        }
        else if(marks<=d && marks>=e){
            System.out.println("Grade E");
        }
        else if(marks<=f && marks>=0){
            System.out.println("Grade F");
        }
        else{
            System.out.println("Invalid");
        }
    }
}
