import java.util.Scanner;

//Write a C program to check if a year is leap year or not. If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400. 

public class Lvl3OneLeapYear {
    public static void main(String[] args) {
        int year;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter year: ");
        year = sc.nextInt();
        if(year%4==0){
            System.out.println("Leap Year.");
        }
        else{
            System.out.println("Not leap year.");
        }
        sc.close();
    }
}
