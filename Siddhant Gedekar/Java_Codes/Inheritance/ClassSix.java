// Create an interface Vehicle with a method start(). Create an interface Flyable with a method fly(). Create a class FlyingCar that implements both Vehicle and Flyable. Implement the methods to print "Starting flying car" for start() and "Flying a car" for fly(). Create an instance of FlyingCar and call both methods.

interface Vehicle{
    void start();
}
interface Flyable{
    void fly();
}
class FlyingCar implements Vehicle, Flyable{
    public void start(){
        System.out.println("Starting Flying Car.");
    }
    public void fly(){
        System.out.println("Flying a Car.");
    }
}

public class ClassSix {
    public static void main(String[] args) {
        FlyingCar fc = new FlyingCar();
        fc.start();
        fc.fly();
    }
}
