class Triangle extends Shape{
	void area() {
		
		double area=1.5*height*width;
		System.out.println("Area of Triangle"+area);
	}
}
class Rectangle extends Shape{
	void area() {
		
		int area1=width*height;
		System.out.println("Area of a Rectangle"+area1);
	}
}
public class Shape {
	int width=12;
	int height=10;
	void area() {
		
	System.out.println("Width and height"+width+","+height);
	}
	public static void main(String[] args) {
		Shape s1=new Shape();
		s1.area();
		
		Triangle t1=new Triangle();
		t1.area();
		
		Rectangle r1=new Rectangle();
		r1.area();
	}

}
