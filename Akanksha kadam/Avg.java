//Write a Java program to create a method that takes an array of integers as input and returns the average of all the integers
public class Avg{
  
        public static void main(String[] args) {
            int[] numbers = {1, 2, 3, 4, 5};
            double average = getAverage(numbers);
            System.out.println("The average is: " + average);
        }
    
        public static double getAverage(int[] arr) {
            int sum = 0;
            for (int i = 0; i < arr.length; i++) {
                sum += arr[i];
            }
            double average = (double) sum / arr.length;
            return average;
        }
    }
    
