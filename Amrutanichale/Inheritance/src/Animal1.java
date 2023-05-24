class Dog1 extends Animal1
	{
	void getName()
	{
		System.out.println("Jimmy");
	}
	}
class Cat1 extends Animal1
	{
	void getName()
	{
		System.out.println("Kitty");
	}
	} 
public class Animal1 {
	String animal="Petanimal";
	void getName(){
		System.out.println(animal);
	}

	public static void main(String[] args) {
		Dog1 d1=new Dog1();
		d1.getName();
		
		Cat1 c1 = new Cat1();
		c1.getName();

	}

}
