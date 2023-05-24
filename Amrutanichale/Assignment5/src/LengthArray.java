//Write a Java method that takes a string array as an argument and returns the length of the longest string.
public class LengthArray {

	public static void main(String[] args) {
		String s1[]= {"Amruta","Priyanka","Sneha","Pratiksha"};
		int length=s1[0].length(),len=0;
		String s2=" ";
		for(int i=0;i<s1.length;i++) {
			len=s1[i].length();
			if(len>length) {
				length=len;
				s2=s1[i];
			}
		}
		System.out.print(s2);
	}

}
