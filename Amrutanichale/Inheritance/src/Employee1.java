class Manager2 extends Employee{
	int bonus=10000;
	void display() {
		System.out.println("Name of Employee : "+name);
		System.out.println("id of Employee : "+id);
		System.out.println("salary of Employee : "+salary);
		System.out.println("Bonus : "+bonus);
		}
}
public class Employee1 {
	String name="Amruta";
	int id=12;
	int salary=90000;
	void display() {
		System.out.println("name : "+name+"id : "+id+"salary : "+salary);
	}

	public static void main(String[] args) {
		Manager2 m1=new Manager2();
		m1.display();


	}

}
