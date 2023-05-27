class Person{
    void sayHello(){
        System.out.println("Hello.");
    }
}

class Student extends Person{
    void sayHello(){
        System.out.println("Hi, I am a Student!.");
    }
}

public class ClassThreeSingleInheritence {
    public static void main(String[] args) {
        Student s = new Student();
        s.sayHello();
    }
}
