// Create a class Fruit with a method eat(). Create an interface Juicy with a method makeJuice(). Create an abstract class JuicyFruit that extends Fruit and implements Juicy. Create a class Orange that extends JuicyFruit. Implement the methods to print "Eating an orange" for eat() and "Making orange juice" for makeJuice().

class Fruit{
    void eat(){

    }
}
interface Juicy{
    void makeJuice();
}
abstract class JuicyFruit implements Juicy{
    abstract void eat();
    abstract public void makeJuice();
}
class Orange extends JuicyFruit{
    public void eat(){
        System.out.println("Eating an Orange.");
    }
    public void makeJuice(){
        System.out.println("Making orange juice.");
    }
}
public class ClassFourteen {
    public static void main(String[] args) {
        Orange o = new Orange();
        o.eat();
        o.makeJuice();
    }
}
