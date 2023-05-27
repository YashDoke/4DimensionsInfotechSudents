class Animal{
    void makeSound(){
        System.out.println("Hello.");
    }
}

class Dog extends Animal {
    void makeSound(){
        System.out.println("Woof!!.");
    }
}

public class ClassTwoSingleInheritence {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.makeSound();
    }
}
