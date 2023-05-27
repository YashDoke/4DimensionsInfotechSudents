class Employee{
    private String name;
    private int id;
    private double salary;
    // getting values
    public double getSalary(){
        return salary;
    }
    public String getName(){
        return name;
    }
    public int getId(){
        return id;
    }
    // setting values
    public void setSalary(double newSalary){
        this.salary= newSalary;
    }
    public void setName(String newName){
        this.name= newName;
    }
    public void setId(int newId){
        this.id = newId;
    }

    public double increment(){
        return (this.salary+(this.salary*0.15));
    }
}

public class Main2 {
    public static void main(String[] args) {
        Employee e = new Employee();
        e.setSalary(21234.345);
        e.setId(1);
        e.setName("Sid");
        System.out.println(e.increment());
    }
}
