// Create a class Person with a method eat(). Create an interface Vegetarian with a method eatVegetables(). Create a class Vegan that extends Person and implements Vegetarian. Implement the methods to print "Eating vegan food" for eat() and "Eating vegetables" for eatVegetables(). Create an instance of Vegan and call both methods.
class Person{
    void eat(){
        System.out.println("Eating.");
    }
}
interface Vegetarian{
    void eatVegetables();
}
class Vegan implements Vegetarian{
    public void eat(){
        System.out.println("Eating vegan food.");
    }
    public void eatVegetables(){
        System.out.println("Eating Vegetables.");
    }
}

public class ClassEleven {
    public static void main(String[] args) {
        Vegan v = new Vegan();
        v.eat();
        v.eatVegetables();
    }
}
