//Write a Java method that takes a string argument and returns true if it is a palindrome, false otherwise
public class Palindrom {

	public static void main(String[] args) {
		String s1="ABCBA";
		if(isPalindrome(s1)) {
			System.out.println(s1+"is palindrome string");
		}
		else
		{
			System.out.print(s1+"Is not palindrom string");
		}
		}
	public static boolean isPalindrome(String str) {
		int left =0, right=str.length()-1;
		while(left<right)
		{
			if(str.charAt(left)!= str.charAt(right)) {
				return false;
			}
			left++;
			right--;
		}
		return true;
	}

}
