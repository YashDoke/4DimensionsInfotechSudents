class Student{
    private String name;
    private int rollNumber;
    private double marks;

    public String getName(){
        return name;
    }
    public int getRollNumber(){
        return rollNumber;
    }
    public double getMarks(){
        return marks;
    }

    public void setName(String newName){
        this.name = newName;
    }
    public void setRollNuber(int newRollNumber){
        this.rollNumber = newRollNumber;
    }
    public void setMarks(double newMarks){
        this.marks = newMarks;
    }

    public void getGrades(){
        if(marks<50){
            System.out.println("D Grade.");
        }
        else if(marks > 50 && marks <70){
            System.out.println("C Grade");
        }
        else if(marks > 70 && marks < 90){
            System.out.println("B Grade");
        }
        else if(marks > 90 && marks < 100){
            System.out.println("A Grade.");
        }
        else{
            System.out.println("Failed");
        }
    }
}

public class Main3 {
    public static void main(String[] args) {
        Student s = new Student();
        s.setName("Sid");
        s.setRollNuber(21);
        s.setMarks(95);
        s.getGrades();
    }
}
