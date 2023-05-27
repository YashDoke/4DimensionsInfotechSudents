class Shape{
    public void draw(){
        System.out.println("Drawing Shape.");
    }
}
class Circle extends Shape{
    public void draw(){
        System.out.println("Drawing Circle.");
    }
}
class Rectangle extends Shape{
    public void draw(){
        System.out.println("Drawing Rectangle.");
    }
}

public class Dynamicmethod {
    public static void main(String[] args) {
        // Runtime Polymorphism
        Shape s1 = new Circle();
        Shape s2 = new Rectangle();
        s1.draw();
        s2.draw();
        // Dynamic Binding
        Rectangle r1 = (Rectangle) s2;
        r1.draw();
    }
}
