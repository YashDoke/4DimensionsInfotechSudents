class Menu{
    int x;
    public Menu(){
        System.out.println("First non-parameter constructor called.");
    }
    // public Menu(int k){
    //     System.out.println("Second Parameter constructor called.");
    //     System.out.println("Overloading happens in constructor.");
    //     x = k;
    // }
    // int modelYear;
    // String modelName;
    // public Menu(int year, String name){
    //     modelName = name;
    //     modelYear = year;
    // }
}

public class ClassConstructor {
    public static void main(String[] args) {
        Menu n = new Menu();
        n.x++;
        System.out.println(n.x);
        // System.out.println(n);
        // Menu m = new Menu(4234);
        // System.out.println(m.x);
        // Menu o = new Menu(1969, "Mustang");
        // System.out.println("Model year: "+o.modelYear+" Model Name"+" "+o.modelName);
    }
}
