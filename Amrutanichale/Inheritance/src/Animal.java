class Dog extends Animal
	{
	void move()
	{
		System.out.println("Dog is pet animal");
	}
	}
class Cat extends Animal
	{
	void move()
	{
		System.out.println("Cat is a Pet Animal");
	}
	} 
public class Animal 
	{
	void move() 
	{
		System.out.println("Pet animal");
	}

	public static void main(String[] args) 
	{
		Animal a1=new Animal();
		a1.move();
		
		Dog d1=new Dog();
		d1.move();
		
		Cat c1 = new Cat();
		c1.move();
	}

	}
