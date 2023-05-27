// this is a default class
// and one file can have only one public class
class demo{
    // public constructor
    // public demo(){

    // }
    // private constructor
    // private demo(){

    // }
    // protected constructor
    // protected demo(){

    // }
    // default constructor
    // demo(){

    // }
    // default access modifier applied to below variable;
    int w;
    // public access modifier applied to below variable;
    public int x;
    // private access modifier applied to below variable;
    private float y;
    // protected access modifier applied to below variable;
    protected double z;
}

public class PublicModifier {
    public static void main(String[] args) {
        demo d = new demo();
        // public variable
        d.x = 10;
        System.out.println("Public variable of class demo: "+d.x);
        // private variable
        // d.y; // cannot access private modifier
        // protected variable
        d.z = 20;
        System.out.println("Protected variable of class demo: "+d.z);
        // default variable
        d.w = 11;
        System.out.println("Default variable of class demo: "+d.w);
    }
}
