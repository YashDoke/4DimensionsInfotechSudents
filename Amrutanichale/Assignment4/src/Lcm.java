//11.Write a program to find the LCM of two numbers.
public class Lcm {

	public static void main(String[] args) {
		int a=15, b=6,gcd=1;
		for(int i=1;i<=a && i<=b; i++)
		{
			if(a%i==0&&b%i==0) {
				gcd=i;
			}
			int lcm=(a*b)/gcd;
			System.out.printf("the lcm of two number %d and %d is %d\n",a,b,lcm);
		}

	}

}
