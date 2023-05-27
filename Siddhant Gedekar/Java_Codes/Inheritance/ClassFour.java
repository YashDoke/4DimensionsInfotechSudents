// Create an interface Drawable with a method draw(). Create an interface Scalable with a method scale(). Create a class Circle that implements both Drawable and Scalable. Implement the methods to print "Drawing a circle" and "Scaling a circle" respectively. Create an instance of Circle and call both methods.

interface Drawable{
    void draw();
}
interface Scalable{
    void scale();
}
class Circle implements Drawable, Scalable{
    public void draw(){
        System.out.println("Drawing a Circle.");
    }
    public void scale(){
        System.out.println("Scalling a Circle.");
    }
}

public class ClassFour {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.draw();
        c.scale();
    }
}
