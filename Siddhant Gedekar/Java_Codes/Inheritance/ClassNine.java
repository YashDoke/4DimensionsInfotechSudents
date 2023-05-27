// Create a class Vehicle with a method start(). Create an interface Convertible with a method openRoof(). Create a class ConvertibleCar that extends Vehicle and implements Convertible. Implement the methods to print "Starting convertible car" for start() and "Opening the roof" for openRoof(). Create an instance of ConvertibleCar and call both methods.
class Vehicle{
    void start(){
        System.out.println("Start.");
    }
}
interface Convertible{
    void openRoof();
}
class ConvertibleCar implements Convertible{
    public void start(){
        System.out.println("Starting.");
    }
    public void openRoof(){
        System.out.println("Opening the Roof.");
    }
}

public class ClassNine {
    public static void main(String[] args) {
        ConvertibleCar c = new ConvertibleCar();
        c.start();
        c.openRoof();
    }
}
