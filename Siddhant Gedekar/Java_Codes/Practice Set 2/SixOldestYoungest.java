import java.util.Scanner;

public class SixOldestYoungest {

    public static void old(float age1, float age2, float age3){
        if(age1>age2 && age1>age3)
            System.out.println("oldest is:"+age1);
        else if(age2>age1 && age2>age3)
            System.out.println("oldest is: "+age2);
        else
            System.out.println("oldest is: "+age3);
    }

    public static void young(float age1, float age2, float age3){
        if(age1<age2 && age1<age3)
            System.out.println("youngest is: "+age1);
        else if(age2<age1 && age2<age3)
            System.out.println("youngest is:"+age2);
        else
            System.out.println("youngest is: "+age3);
    }
    public static void main(String[] args) {
        float age1, age2, age3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter age of 3 peoples: ");
        age1 = sc.nextFloat();
        age2 = sc.nextFloat();
        age3 = sc.nextFloat();
        sc.close();
        young(age1, age2, age3);
        old(age1, age2, age3);
    }
}
