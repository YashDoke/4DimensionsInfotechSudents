

interface Parent1 {
    void getName();
}

interface Parent2{
    void displayInfo();
}
class GrandParent implements Parent1,Parent2{
    String name;
    int age;
    public GrandParent(String name, int age){
        this.name = name;
        this.age = age;
    }
    public void getName(){
        System.out.println(name);
    }
    
    public void displayInfo(){
        System.out.println(name+" "+age);
    }
}

class Child implements Parent1,Parent2 {
    String name;
    int age;
    public Child(String name ,int age){
        this.name = name;
        this.age = age;
    }

    public void getName(){
        System.out.println(name);
    }
    
    public void displayInfo(){
        System.out.println(name+" "+age);
    }
}

public class Multiple_inheritance {
    public static void main(String[] args){

        Child ch1 = new Child("Virat",15);
        ch1.getName();
        ch1.displayInfo();
    }   
}
