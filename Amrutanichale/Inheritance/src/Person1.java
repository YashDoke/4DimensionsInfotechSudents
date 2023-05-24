class Student1 extends Person{
	String grade = "A";
	void display() {
		System.out.println("Grade of student : "+grade);
		System.out.println("Name of student : "+name);
				System.out.println("age of student : "+age);
	}
}
class Teacher extends Person{
	String subject="Java";
	void display() {
		System.out.println("Subject name : "+subject);
		
	}
}
public class Person1 {
	String name="Amruta";
	int age=22;
	void display() {
		System.out.println("Name and Age : "+name+","+age);
		
	}

	public static void main(String[] args) {
		Person p1=new Person();
		p1.display();
		
		Teacher t1=new Teacher();
		t1.display();
		
		Student1 s1=new Student1();
		s1.display();
	}

}
