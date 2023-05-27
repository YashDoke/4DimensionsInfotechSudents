class Animal{
    private int x;
    // instance initializer block
    {
        x = 11;
    }
    public Animal reproduce(){
        System.out.println("Reproduce method of animal class.");
        return new Animal();
    }
}
class Cat extends Animal{
    public Cat reproduce(){
        super.reproduce();
        System.out.println("Reproduce method of Cat class.");
        return new Cat();
    }
}

public class CovariantReturnType {
    public static void main(String[] args) {
        // Dynamic Binding
        Animal c = new Cat();
        System.out.println(c.reproduce());
        if(c instanceof Animal){
            System.out.println("Object c is an instance of Animal class.");
        }
        else{
            System.out.println("Object c is an instance of Cat class.");
        }
    }
}
