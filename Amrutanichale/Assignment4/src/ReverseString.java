//12.Write a program to reverse a string.

public class ReverseString {

	public static void main(String[] args) {
		String str="Amruta";
		String newstr="";
		char ch;
		
		for(int i=0;i<str.length();i++) {
			ch=str.charAt(i);
			newstr=ch+newstr;
		}
		System.out.print(newstr);

	}

}
