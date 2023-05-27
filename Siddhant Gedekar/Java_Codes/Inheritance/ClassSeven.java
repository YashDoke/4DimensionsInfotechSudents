// Create a class Animal with a method eat(). Create an interface Pet with a method play(). Create a class Dog that extends Animal and implements Pet. Implement the methods to print "Eating dog food" for eat() and "Playing with a ball" for play(). Create an instance of Dog and call both methods.
class Animal{
    void eat(){
        System.out.println("Eats.");
    }
}
interface Pet{
    void play();
}
class Dog implements Pet{
    public void eat(){
        System.out.println("Eating dog food.");
    }
    public void play(){
        System.out.println("Playing with a ball.");
    }
}

public class ClassSeven {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat();
        d.play();
    }
}
