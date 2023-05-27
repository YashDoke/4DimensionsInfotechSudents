import java.util.Scanner;
// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

public class NineStudentAttendence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your attendence: ");
        int attendence;
        String medical;
        attendence = sc.nextInt();
        System.out.print("Did you had medical conditions: (y/n)");
        medical = sc.next();
        if(attendence<74)
            if(medical.charAt(0) == 'y')
                System.out.println("You are allowed to sit in exam.");
            else
                System.out.println("You are not allowed to sit in exam. Required attendence is 75 and above.");
        else
            System.out.println("You are allowed to sit in exam.");

        sc.close();
    }
}
