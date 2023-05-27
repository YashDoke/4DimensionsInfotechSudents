class Shape{
    void getArea(){
        System.out.println("GetArea Method Called.");
    }
}

class Rectangle extends Shape{
    void getPerimeter(){
        System.out.println("GetPerimeter Method Called.");
    }
}

public class ClassOne{
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        r.getArea();
        r.getPerimeter();
    }
}