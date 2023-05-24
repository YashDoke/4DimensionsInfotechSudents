class Car extends Vehical{
	int seats=4;
	void drive() {
		System.out.println("The number of seats in car:"+seats);
		System.out.println("Speed and fuel : "+speed+","+fuel);
	}
}
public class Vehical {
	int fuel=5;
	int speed=80;
	void drive() {
		System.out.print("Speed and fuel : "+speed+","+fuel);
	}

	public static void main(String[] args) {
		Car c1=new Car();
		c1.drive();

	}

}
