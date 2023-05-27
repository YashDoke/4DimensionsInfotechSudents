class Vehicle{
    void start(){
        System.out.println("Starting..");
    }
}
class Car extends Vehicle{
    void drive(){
        System.out.println("Driving..");
    }
}
class ElectricCar extends Car{
    void start(){
        System.out.println("Starting Electric Car..");
    }
}

public class ClassMultilevelInheritence{
    public static void main(String[] args) {
        ElectricCar e = new ElectricCar();
        e.start();
        e.drive();
    }
}