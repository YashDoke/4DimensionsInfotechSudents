//Write a Java method that takes an integer argument and returns true if it is even, false otherwise.
public class IntegerArgument {

	public static void main(String[] args) {
		int num=12;
		if(isEven(num)) {
			System.out.print("true");
		}
			else {
				System.out.print("false");
		}
		}
	public static boolean isEven(int num) {
		if(num%2==0) {
			return true;
		}
		else {
			return false;
		}
	}

}
