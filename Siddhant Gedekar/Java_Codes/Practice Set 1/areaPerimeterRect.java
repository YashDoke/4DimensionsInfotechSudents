import java.util.Scanner;

class areaPerimeterRect{

    static void area(int length, int breadth){
        System.out.println("Area of rectangle is: "+(length*breadth));
    }

    static void perimeter(int length, int breadth){
        System.out.println("Perimeter of rectangle is: "+2*(length+breadth));
    }
    // Find the area and perimeter of rect
    public static void main(String [] args){
        System.out.println("Enter length and breadth of rectangle: ");
        Scanner sc = new Scanner(System.in);
        // take input
        int length = sc.nextInt();
        int breadth = sc.nextInt();
        sc.close();
        area(length, breadth);
        perimeter(length, breadth);
    }
}