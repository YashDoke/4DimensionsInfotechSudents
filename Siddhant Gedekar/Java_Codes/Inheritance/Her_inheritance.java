
import java.util.Scanner;

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
class Developer extends  Employee{
    String place;
    
    public Developer(String name,int salary,String place){
        this.name = name;
        this.salary = salary;
        this.place = place;
    }

    void displayInfo(){
        System.out.println(name+" "+salary+" "+ place);
    }
}

public class Her_inheritance{

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
        Manager m2 = new Manager(name,salary,department);
        Developer m1 = new Developer(name,salary,place);
        sc.close();
        m1.displayInfo();
        m2.displayInfo();

    }

}