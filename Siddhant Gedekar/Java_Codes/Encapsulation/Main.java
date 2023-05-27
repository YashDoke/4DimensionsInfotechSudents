class Rectangle{
    private double length;
    private double width;

    public double getLength(){
        return length;
    }
    public double getWidth(){
        return width;
    }

    public void setLength(double newLength){
        this.length = newLength;
    }
    public void setWidth(double newWidth){
        this.width = newWidth;
    }
    public double area(){
        return length*width;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        r.setLength(21.345);
        r.setWidth(12.453);
        System.out.println(r.area());
    }
}
