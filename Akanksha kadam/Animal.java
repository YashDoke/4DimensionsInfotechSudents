public class Animal{
public void move(){
    System.out.println("Hii!!");
}
 public static void main(String[] args) {
    Animal a=new Animal();
    a.move();
    Dog d=new Dog();
    d.move();
    Cat c=new Cat();
    c.move();

} 
}
class Dog extends Animal{
public void move(){
    System.out.println("Hello!!");
}
}
class Cat extends Animal{
    public void move(){
        System.out.println("Heyyy!!");
    }
}