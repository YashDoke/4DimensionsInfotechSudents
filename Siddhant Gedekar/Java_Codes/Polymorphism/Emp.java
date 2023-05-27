class Employee{
    public final void salary(){
        System.out.println("Salary of Employee.");
    }
}
class Manager extends Employee{
    public void salaryOfManager(){
        System.out.println("Salary of Manager.");
    }
}
class Clerk extends Manager{
    public void salaryOfClerk(){
        System.out.println("Salary of Clerk.");
    }
}

public class Emp {
    public static void main(String[] args) {
        // Manager m = new Manager();
        Clerk c = new Clerk();
        Employee c1 = new Clerk();
        Employee e = new Employee();
        e.salary();
        // c.salary();
        // c.salaryOfManager();
        c.salaryOfClerk();
        if(c1 instanceof Clerk){
            System.out.println("c1 is instance of Clerk class.");
        }
        else{
            System.out.println("c1 is instance of Employee class.");
        }
    }
}
