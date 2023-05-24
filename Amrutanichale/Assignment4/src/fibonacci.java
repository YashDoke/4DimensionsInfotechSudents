//9.Write a program to print the Fibonacci series up to a given number.
public class fibonacci {

	public static void main(String[] args) {
		int num1=0,num2=1,num3,count=20,i;
		System.out.println(num1+" "+num2);
		for(i=2;i<count;i++)
		{
			num3=num1+num2;
			System.out.println(""+num3);
			num1=num2;
			num2=num3;
		}

	}

}
