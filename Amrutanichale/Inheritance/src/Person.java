class Student extends Person{
	String grade = "A";
	void display() {
		System.out.println("Grade of student : "+grade);
		System.out.println("Name of student : "+name);
				System.out.println("age of student : "+age);
	}
}

public class Person {
	String name="Amruta";
	int age=22;
	void display() {
		System.out.println("Name and Age : "+name+","+age);
		
	}

	public static void main(String[] args) {
		Person p1=new Person();
		p1.display();
		
		Student s1=new Student();
		s1.display();
	}

}
