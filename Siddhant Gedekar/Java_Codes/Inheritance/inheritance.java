import java.util.Scanner;

// class Animal{
//     void eat(){
//         System.out.println("Eating...");
//     }
// }

// class Dog extends Animal{
//     void bark(){
//         System.out.println("Barking...");
//     }
// }

// class BabyDog extends Animal{
//     void weep(){
//         System.out.println("Weeping...");
//     }
// }
// class Cat extends Animal{
//     void Meow(){
//         System.out.println("Meow...");
//     }
// }
// class Lion extends Animal{
//     void Roar(){
//         System.out.println("Roar...");
//     }
// }

// class Addition{
//     void sum(){
//         System.out.println("Hello");
//     }
// }
// class substraction{
//     void sum(){
//         System.out.println("word");
//     }
// }


// class NewClass extends Addition,substraction {
    
// }

class Employee{
    String name;
    int salary;
    void displayInfo(){
        System.out.println(name+" "+salary);
    } 
}

class Manager extends Employee{
    String department;
    public Manager(String name,int salary,String department){
        this.name = name;
        this.department=department;
        this.salary = salary;
    }
    void displayInfo(){
        System.out.println(name+" "+salary+" "+department);
    }
}
class Developer extends Manager{
    String place;
    
    public Developer(String name,int salary,String department,String place){
        super(name,salary,department);
        this.name = name;
        this.department=department;
        this.salary = salary;
        this.place = place;
    }

    void displayInfo(){
        System.out.println(name+" "+salary+" "+department+" "+ place);
    }
}

public class inheritance {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Name:");
        String name=sc.nextLine();
        System.out.println("department:");
        String department=sc.nextLine();
        System.out.println("place:");
        String place = sc.nextLine();
        System.out.println("Salary:");
        int salary=sc.nextInt();
        // Manager m2 = new Manager(name,salary,department);
        Developer m1 = new Developer(name,salary,department,place);
        
        m1.displayInfo();
        sc.close();



        // BabyDog dog1 = new BabyDog();
        // dog1.eat();
        // dog1.weep();

        // Dog dog2 = new Dog();
        // dog2.bark();
        // dog2.eat();

        // Cat cat1 = new Cat();
        // cat1.Meow();
        // cat1.eat();

        // Lion lion1 = new Lion();
        // lion1.Roar();
        // lion1.eat();

        
    }
}
