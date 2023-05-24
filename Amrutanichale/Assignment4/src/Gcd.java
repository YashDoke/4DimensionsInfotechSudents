//10.Write a program to find the GCD of two numbers.
public class Gcd {

	public static void main(String[] args) {
		int a=66, b=45, gcd=1;
				for(int i=1;i<=a&&i<=b;i++) {
					if(a%i==0&&b%i==0) {
						gcd=i;
					}
				}
				System.out.printf("GCD of %d and %d is : %d",a,b,gcd);

	}

}
