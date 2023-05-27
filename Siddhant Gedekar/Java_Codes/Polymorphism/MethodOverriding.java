class Animal{
    public void makeSound(){
        System.out.println("Generic Animal Sound.");
    }
}
class Cat extends Animal{
    public void makeSound(){
        System.out.println("Meow.");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        Cat c = new Cat();
        c.makeSound();
    }
}
