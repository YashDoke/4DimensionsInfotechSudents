class Person{
    void eat(){
        System.out.println("Eating.");
    }
}
class Student{
    void Study(){
        System.out.println("Studying.");
    }
}
class UndergradStudent extends Student{
    void eat(){
        System.out.println("I am eating Ramen.");
    }
}

public class ClassMIPerson {
    public static void main(String[] args) {
        UndergradStudent ug = new UndergradStudent();
        ug.eat();
        ug.Study();
    }
}
