import java.util.Scanner;

// Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service. if employee is female, then she will work only in urban areas. if employee is a male and age is in between 20 to 40 then he may work in anywhere  if employee is male and age is in between 40 to 60 then he will work in urban areas only.  And any other input of age should print "ERROR".

public class Lvl3FourEmployeeWork {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age;
        String sex, status;
        System.out.println("Enter age: ");
        age = sc.nextInt();
        System.out.println("Enter sex: ");
        sex = sc.next();
        System.out.println("Enter Marital Status: ");
        status = sc.nextLine();
        if(sex.charAt(0)=='F' || sex.charAt(0)=='f')
            System.out.println("Work only in Urban areas.");
        else if((sex.charAt(0)=='M' || sex.charAt(0)=='m') && (age>=20 && age<=40))
            System.out.println("Work Anywhere.");
        else if((sex.charAt(0)=='M' || sex.charAt(0)=='m') && (age>=40 && age<=60))
            System.out.println("Work only in Urban areas.");
        else
            System.out.println("ERROR");
        sc.close();
    }
}
