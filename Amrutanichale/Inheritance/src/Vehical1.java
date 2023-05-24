class Car1 extends Vehical1{
	int doors=4;
	void drive() {
		System.out.println("The number of doors in car:"+doors);
		
	}
}
class Truck extends Vehical1{
	int weight=100;
	void drive() {
		System.out.println("The capacity of Truck is "+weight+"tone");
		
	}
}
public class Vehical1 {
	int fuel=5;
	int speed=80;
	void drive() {
		System.out.println("Speed and fuel : "+speed+","+fuel);
	}



	public static void main(String[] args) {
		Vehical1 v1=new Vehical1();
		v1.drive();
		
		Car1 c1=new Car1();
		c1.drive();
		
		Truck t1=new Truck();
		t1.drive();


	}

}
