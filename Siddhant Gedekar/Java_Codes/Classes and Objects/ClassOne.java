class demo{
    int x = 10;
    int y = 23;
    int z = 44;
    void demoMethod(){
        System.out.println("Just a demo method called by object of demo class.");
    }
}

public class ClassOne {
    static void print(){
        System.out.println("Static method ran.");
    }

    public void print1(){
        System.out.println("Public method ran.");
    }
    public static void main(String[] args) {
        demo d = new demo();
        System.out.println("Value of demo class variable before increment: "+d.x);
        d.x++;
        System.out.println("Value of demo class variable after increment: "+d.x);
        demo d1 = new demo();
        System.out.println("Value of demo class variable by creating 2nd object instance: "+d1.x);
        // final int a = d.z++;
        d.z++;
        System.out.println("Calling static variable of demo class: "+d.z);
        d1.z++;
        System.out.println("Calling static variable of demo class by making another instanced: "+d1.z);
        System.out.print("Calling Static method without creating object of same class: ");
        print();
        ClassOne n1 = new ClassOne();
        System.out.print("Calling public method by creating object of the same class: ");
        n1.print1();
        d.demoMethod();
        // ClassTwo c2 = new ClassTwo();

    }
}
