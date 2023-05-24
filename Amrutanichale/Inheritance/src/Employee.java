class Manager1 extends Employee{
	String department="Development";
	void display() {
		System.out.println("Name of Employee : "+name);
		System.out.println("id of Employee : "+id);
		System.out.println("salary of Employee : "+salary);
		System.out.println("department of Employee : "+department);
		}
}
public class Employee {
	String name="Amruta";
	int id=12;
	int salary=90000;
	void display() {
		System.out.println("name : "+name+"id : "+id+"salary : "+salary);
	}
	public static void main(String[] args) {
		Manager1 m1=new Manager1();
		m1.display();

	}

}
