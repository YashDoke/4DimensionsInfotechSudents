//Write a Java method that takes an integer argument and returns its factorial.
public class Factorial {

	public static void main(int n) {
		int result = 1;
	    for (int i = 2; i <= n; i++) {
	        result *= i;
	    }
	    System.out.println(result);
	}

}
