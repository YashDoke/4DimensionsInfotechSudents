class Circle extends Shape1{
	void getColor() {
		System.out.println(color);
	}
}
class Rectangle1 extends Shape1{
	void getColor() {
		System.out.println(color);
	}
}
public class Shape1 {
	String color="red";
	void getColor() {
		System.out.println(color);
	}
	public static void main(String[] args) {
		Rectangle1 r1=new Rectangle1();
		r1.getColor();
		
		Circle c1=new Circle();
		c1.getColor();

	}

}
