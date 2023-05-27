import java.util.Scanner;
//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.Ask user for their salary and year of service and print the net bonus amount.

public class FourEmployeeBonus {

    static int bonus(float salary,float year){
        if(year>5){
            System.out.println("You get 5% bonus on your salary i.e.: "+(salary*0.05f));
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float year,salary;
        System.out.print("Enter number of years you have worked in this company: ");
        year = sc.nextFloat();
        if(year>5){
            System.out.print("Enter your yearly salary: ");
            salary = sc.nextFloat();
            bonus(salary, year);
        }
        else{
            System.out.print("You don't get any bonus this year.");
        }
        sc.close();
    }
}
