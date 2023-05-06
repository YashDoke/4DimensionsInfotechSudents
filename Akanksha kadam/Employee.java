public class Employee{
    String name="Akanksha";
    int id=101;
    int salary=80000;
    public void display(){
        System.out.println("Name Of Employee: "+name);
        System.out.println("Id Of Employee: "+id);
        System.out.println("Slary Of Employee: "+salary);
    }


    public static void main(String args[]){
        Manager m=new Manager();
        m.display();
    }
}
class Manager extends Employee{
    String dept="Testing";
    public void display(){
        System.out.println("Name Of Employee: "+name);
        System.out.println("Id Of Employee: "+id);
        System.out.println("Salary Of Employee: "+salary);
        System.out.println(" Department of Employee: "+dept);
    }
}