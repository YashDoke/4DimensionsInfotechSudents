//8.Write a program to find the factorial of a number.
public class FactorialNum {

	public static void main(String[] args) {
		int i, fact=1;
		int num=10;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		System.out.println("Factorial of "+num+ " is :" +fact);

	}

}
