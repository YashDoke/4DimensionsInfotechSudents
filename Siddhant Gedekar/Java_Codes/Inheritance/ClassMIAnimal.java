class Animal{
    void eat(){
        System.out.println("Eating.");
    }
}

class Bird extends Animal{
    void fly(){
        System.out.println("Flying.");
    }
}

class Penguin extends Bird{
    void fly(){
        System.out.println("Sorry, I can't fly.");
    }
}

public class ClassMIAnimal {
    public static void main(String[] args) {
        Penguin p = new Penguin();
        p.eat();
        p.fly();
    }
}
