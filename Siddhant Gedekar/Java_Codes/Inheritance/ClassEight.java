//Create a class Person with a method sayHello(). Create an interface Athlete with a method compete(). Create a class AthleticPerson that extends Person and implements Athlete. Implement the methods to print "Hello, I'm an athlete" for sayHello() and "Competing in the Olympics" for compete(). Create an instance of AthleticPerson and call both methods.
class Person{
    void sayHello(){
        System.out.println("Hello.");
    }
}
interface Athlete{
    void compete();
}
class AthleticPerson implements Athlete{
    public void sayHello(){
        System.out.println("Hello, I'm an Athelete.");
    }
    public void compete(){
        System.out.println("Competing in Olympics.");
    }
}
public class ClassEight {
    public static void main(String[] args) {
        AthleticPerson ap = new AthleticPerson();
        ap.sayHello();
        ap.compete();
    }
}
