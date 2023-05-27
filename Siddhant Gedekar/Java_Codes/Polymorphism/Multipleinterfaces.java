interface Animal{
    void makeSound();
}

class Cat{
    public void makeSound(){
        System.out.println("Meow.");
    }
}
class Dog{
    public void makeSound(){
        System.out.println("Woof.");
    }
}

public class Multipleinterfaces {
    public static void main(String[] args) {
        Cat c = new Cat();
        Dog d = new Dog();
        c.makeSound();
        d.makeSound();
    }
}
