// Create an abstract class Animal with a method eat(). Create an interface Swimable with a method swim(). Create a class Dolphin that extends Animal and implements Swimable. Implement the methods to print "Eating fish" for eat() and "Swimming like a dolphin" for swim(). Create an instance of Dolphin and call both methods.
abstract class Animal{
    abstract void eat();
}
interface Swimable{
    void swim();
}
class Dolphin implements Swimable{
    public void eat(){
        System.out.println("Eating Fish.");
    }
    public void swim(){
        System.out.println("Swimming like a dolphin.");
    }
}
public class ClassThirteen {
    public static void main(String[] args) {
        Dolphin d = new Dolphin();
        d.eat();
        d.swim();
    }
}
