public class Employee1{
    int id1=102;
    String Empname="Akanksha";
    int sal=90000;
    public static void main(String args[]){
        Manager1 m=new Manager1();
        m.display1();
    }
}
class Manager1 extends Employee1{
    int bonus=20000;
    public void display1(){
        System.out.println("Employee id is :"+id1);
        System.out.println("Employee name is :"+Empname);
        System.out.println("Employee salary is:"+sal);
        System.out.println("Bonus of Employee is:"+bonus);
    }
}