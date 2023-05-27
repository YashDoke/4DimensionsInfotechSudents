// You can't inherit a final class.
// Though you can create object of it.
final class demo{
    int a;
    public demo(){
        System.out.println("This is a final class, that has been called.");
    }
}
// You can't create object of abstract class.
// Though you can inherit it.
abstract class demo1{
    int b;
    abstract int add();
    public demo1(){
        System.out.println("This is an abstract class, that has been called.");
    }
}

class demo3{
    final int c = 23;
    static float d;
}

public class ModifierForClassesAttributes {
    public static void main(String[] args) {
        demo d = new demo();
        System.out.println(d.a);
        // demo1 d1 = new demo1();
        // System.out.println(d1.b);
    }
}
