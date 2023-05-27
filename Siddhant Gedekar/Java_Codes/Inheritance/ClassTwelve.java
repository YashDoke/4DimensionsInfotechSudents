// Create a class Shape with a method getArea(). Create an abstract class ThreeDimensionalShape that extends Shape and has an abstract method getVolume(). Create a class Sphere that extends ThreeDimensionalShape. Implement the methods to calculate and return the area and volume of a sphere. Create an instance of Sphere and call both getArea() and getVolume().
class Shape{
    double getArea(int value){
        return value;
    }
}
abstract class ThreeDimensionalShape extends Shape{
    abstract double getVolume(int radius);
}
class Sphere extends ThreeDimensionalShape{
    public double getArea(int radius){
        return (4*3.1415926*radius*radius);
    }
    public double getVolume(int radius){
        return ((4*3.1415926*radius*radius*radius)/3);
    }
}

public class ClassTwelve {
    public static void main(String[] args) {
        Sphere s = new Sphere();
        System.out.println(s.getArea(4));
        System.out.println(s.getVolume(4));
    }
}
