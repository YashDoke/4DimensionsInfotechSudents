//2.Write a program to swap two numbers without using a temporary variable.
public class SwapTwoNum {

	public static void main(String[] args) {
		int a=10;
		int b=20;
		System.out.println("Before swapping numbers : "+a+" "+b);
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("After swapping numbers : "+a+" "+b);
	}

}
