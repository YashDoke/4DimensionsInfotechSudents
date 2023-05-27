class demo{
    // public constructor
    public demo(){
        System.out.println("Public constructor called");
    }
}

class demo1{
    int x;
    // private constructor
    private demo1(){
        System.out.println("Private constructor called");
    }
}

class demo2{
    // protected constructor
    protected demo2(){
        System.out.println("Protected constructor called");
    }
}

class demo3{
    // default constructor
    demo3(){
        System.out.println("Default constructor called");
    }
}

public class ModifierForConstructor {
    public static void main(String[] args) {
        demo d = new demo();
        // demo1 d1 = new demo1();
        demo2 d2 = new demo2();
        demo3 d3 = new demo3();
    }
}
